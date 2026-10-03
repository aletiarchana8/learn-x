#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *L1 = NULL;
struct node *L2 = NULL;
struct node *L3 = NULL;

void insert(struct node **start, int x)
{
    struct node *temp;
    struct node *cur;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = x;
    temp->next = NULL;

    if (*start == NULL)
    {
        *start = temp;
    }
    else
    {
        cur = *start;

        while (cur->next != NULL)
        {
            cur = cur->next;
        }

        cur->next = temp;
    }
}

void display(struct node *start)
{
    struct node *cur = start;

    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }

    printf("\n");
}

void merge()
{
    struct node *p = L1;
    struct node *q = L2;

    L3 = NULL;

    while (p != NULL && q != NULL)
    {
        if (p->data <= q->data)
        {
            insert(&L3, p->data);
            p = p->next;
        }
        else
        {
            insert(&L3, q->data);
            q = q->next;
        }
    }

    while (p != NULL)
    {
        insert(&L3, p->data);
        p = p->next;
    }

    while (q != NULL)
    {
        insert(&L3, q->data);
        q = q->next;
    }
}

int main()
{
    int n, i, x;

    printf("Enter number of elements in L1: ");
    scanf("%d", &n);

    printf("Enter sorted elements of L1:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insert(&L1, x);
    }

    printf("Enter number of elements in L2: ");
    scanf("%d", &n);

    printf("Enter sorted elements of L2:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insert(&L2, x);
    }

    printf("\nL1: ");
    display(L1);

    printf("L2: ");
    display(L2);

    merge();

    printf("Merged list: ");
    display(L3);

    return 0;
}
