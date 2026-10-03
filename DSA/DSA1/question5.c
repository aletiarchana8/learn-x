#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void insert()
{
    int ele;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter element: ");
    scanf("%d", &ele);

    newnode->data = ele;
    newnode->next = top;
    top = newnode;
}

void delete()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;

    printf("Deleted element = %d\n", temp->data);

    top = top->next;

    free(temp);
}

void traverse()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;

    printf("Stack elements:\n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- STACK USING LINKED LIST ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                traverse();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
