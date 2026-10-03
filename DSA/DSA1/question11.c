#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void insert()
{
    int x;
    struct node *temp;
    struct node *cur;

    printf("Enter element: ");
    scanf("%d", &x);

    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = x;
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        cur = start;

        while (cur->next != NULL)
        {
            cur = cur->next;
        }

        cur->next = temp;
    }
}

int detect_cycle()
{
    struct node *slow = start;
    struct node *fast = start;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        insert();
    }

    if (detect_cycle() == 1)
    {
        printf("1 - Cycle is present\n");
    }
    else
    {
        printf("0 - No cycle\n");
    }

    return 0;
}
