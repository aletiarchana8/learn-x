#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int tos;
    int *s;
};

struct stack stack;

void push()
{
    int ele;

    if (stack.tos == stack.size - 1)
    {
        printf("Stack is full\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &ele);

    stack.tos++;
    stack.s[stack.tos] = ele;

    printf("Element pushed successfully\n");
}

void pop()
{
    if (stack.tos == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Deleted element: %d\n", stack.s[stack.tos]);

    stack.tos--;
}

void peek()
{
    if (stack.tos == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack.s[stack.tos]);
    }
}

void display()
{
    int i;

    if (stack.tos == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");

    for (i = stack.tos; i >= 0; i--)
    {
        printf("%d\n", stack.s[i]);
    }
}

int main()
{
    int choice;

    printf("Enter stack size: ");
    scanf("%d", &stack.size);

    stack.s = (int *)malloc(stack.size * sizeof(int));

    stack.tos = -1;

    while (1)
    {
        printf("\n--- STACK ADT USING ARRAY ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                free(stack.s);
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
