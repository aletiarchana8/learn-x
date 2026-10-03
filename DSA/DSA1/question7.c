#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *start;

void insert_beg();
void insert_end();
void insert_after();
void insert_before();
void travel_forward();
void delete_beg();
int delete_end();
void delete_spec();
void traverse_back();
void reverse();
void fun(struct node *cur);


int main()
{                 
	int choice;
	start = NULL;

	do
	{
		printf("\n1. Insert beginning\n");
		printf("2. insert at end\n");
	        printf("3.inster after element\n");
		printf("4.insert before an element\n");	
		printf("5.traverse forward\n");
		printf("6. Delete beginning\n");
		printf("7.delete end\n");
		printf("8. delete spec\n");
		printf("9. traverse back\n");
		printf("10. reverse\n");
        printf("11. Exit\n");

		
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			        insert_beg();
                                 break;


			case 2:
			       	insert_end();
                		break;
			case 3:
				insert_after();
				break;
			case 4:
				insert_before();
				break;
			case 5:
				travel_forward();
				break;
			case 6: 
				delete_beg();
				break;
			case 7:
				delete_end();
				break;
			case 8:
				delete_spec();
				break;
			case 9:
				traverse_back();
				break;
			case 10:
				reverse();
				break;
            case 11:
                exit(0);


			default:
				printf("Invalid choice\n");

		}
	} while (choice != 11);
	return 0;
}


void insert_beg()
{
	int x;

   	 printf("Enter value: ");
    	scanf("%d", &x);
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	temp->next = start;
	start = temp;
	printf("%d inserted at beginning.\n", x);
}
void insert_end()
{
	int x;

    	printf("Enter value: ");
	scanf("%d", &x);

	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data =x;
	temp->next=NULL;
	if(start==NULL)
 //printf("%d deleted.\n", temp->data);
	{
		start=temp;
	
	}

	else
	{
		struct node *cur=start;
		while(cur->next!=NULL)
		{
		     cur=cur->next;
		}
		cur->next=temp;
	}
	 printf("%d inserted at end.\n", x);

}

void insert_after()
{
    int x, value;
    struct node *cur;
    struct node *temp;

    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &x);

    printf("Insert after which value: ");
    scanf("%d", &value);

    cur = start;

    while (cur != NULL && cur->data != value)
    {
        cur = cur->next;
    }

    if (cur == NULL)
    {
        printf("Element not found\n");
        return;
    }

    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = x;
    temp->next = cur->next;
    cur->next = temp;

    printf("%d inserted after %d.\n", x, value);
}


void insert_before()
{
    int x, value;
    struct node *temp;
    struct node *cur;

    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &x);

    printf("Insert before which value: ");
    scanf("%d", &value);

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    if (start->data == value)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        cur = start;

        while (cur->next != NULL && cur->next->data != value)
        {
            cur = cur->next;
        }

        if (cur->next != NULL)
        {
            temp->next = cur->next;
            cur->next = temp;
        }
        else
        {
            printf("Element not found\n");
            free(temp);
            return;
        }
    }

    printf("%d inserted before %d.\n", x, value);
}
		 


void travel_forward()
{
	if(start != NULL)
	{
		struct node *temp;
		temp = start;
		while(temp != NULL)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		}
	}
	else
		printf("list is empty\n");
}

void delete_beg()
{
	int x= -1;
	struct node *temp;
	if (start != NULL)
	{
	        temp = start;
		start = temp->next;
		x = temp->data;
		free(temp);
		printf("%d deleted.\n", x);

	}
	else
	{
		printf("list is empty\n");
	}
	return;
}

int delete_end()
{
    int x = -1;
    struct node *cur, *temp;

    if (start == NULL)
    {
        printf("List is empty\n");
        return -1;
    }

    if (start->next == NULL)
    {
        x = start->data;
        temp = start;
        start = NULL;
        free(temp);

        printf("%d deleted.\n", x);
        return x;
    }

    cur = start;

    while (cur->next->next != NULL)
    {
        cur = cur->next;
    }

    temp = cur->next;
    x = temp->data;

    cur->next = NULL;
    free(temp);

    printf("%d deleted.\n", x);

    return x;
}
	

void delete_spec()
{
	if(start == NULL)
	{
		printf("list is empty");
	}
	else
	{
		int x;
		printf("enter element to delete: ");
		scanf("%d",&x);

		struct node *cur,*temp;
		cur=start;
		if (start->data==x)
		{
			temp=start;
			start =temp->next;
			free(temp);
		}
		else
		{
			while(cur->next!=NULL && cur->next->data!=x)
			{
				cur=cur->next;
			}
			if (cur->next!= NULL)
			{
				temp= cur->next;
				cur->next=temp->next;
				free(temp);
			}
			else
			{
				printf("element not found");
			}
		}
	}
}

void traverse_back()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		fun(start);
	}
}
void fun(struct node *cur)
{
	if(cur->next!=NULL)
	{
		fun(cur->next);
	}
	printf("%d ",cur->data);
}

void reverse()
{
	struct node *temp,*rev;
	rev = NULL;
	while(start!=NULL)
	{
		temp=start;
		start=temp->next;
		temp->next= rev;
		rev=temp;
	}
	start=rev;
}
