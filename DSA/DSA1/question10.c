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

void delete_duplicates()
{
    struct node *cur;
    struct node *temp;

    cur = start;

    while (cur != NULL && cur->next != NULL)
    {
        if (cur->data == cur->next->data)
        {
            temp = cur->next;
            cur->next = temp->next;
            free(temp);
        }
        else
        {
            cur = cur->next;
        }
    }
}

void traverse()
{
    struct node *cur = start;

    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }

    printf("\n");
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");

    for (i = 0; i < n; i++)
    {
        insert();
    }

    printf("Before deleting duplicates:\n");
    traverse();

    delete_duplicates();

    printf("After deleting duplicates:\n");
    traverse();

    return 0;
}
