#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct queue 
{
       	int size;
	int front;
	int rear;
	int *q;
} que;
    int underflow()
{
	if (que.front==-1 && que.rear==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int overflow()
{
	if (que.rear==que.size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue (int ele)
{
	if (!overflow())
	{
		if(que.front==-1)
		{
			(que.front++);
		}
		que.q[++que.rear]=ele;
	}
	else
	{
		printf("the queue is full\n");
	}
}
int dequeue()
{
	int x;
	if(!underflow())
	{
        	printf(" the queue empty");
		return -1;
	}
	else
	{

		x=que.q[que.front];
		if(que.front == que.rear)
		{
			que.front=-1;
		       que.rear=-1;
	}
		else
	{
		que.front++;
	}

	return x;
	}
}
void display()
{
	if(!underflow())
	{
		for(int i=que.front; i<=que.rear;i++)
		{
			printf("%d\n",que.q[i]);
		}
	}
}

int main()
{ 
	int i,ele;
	printf("enter the size of queue:\n");
	scanf("%d",&que.size);
	que.q=(int*)malloc(que.size*sizeof(int));
	if(que.q==NULL)
        {
	printf("memory is full\n");
	return 1;
	}
	do
	{
   	printf("1.underflow:\n");
        printf("2. overflow:\n");
        printf("3. enqueue:\n");
        printf("4. dequeue:\n");
        printf("5. display:\n");
        
        printf("Enter the choice:\n");
        scanf("%d", &i);
        switch (i)
	{
        
                 case 1:
                        if(underflow())

                                printf("queue is empty\n");
                        else
                                printf("queue is not empty\n");
                        break;
                case 2:
                        if(overflow())
                                printf("queue is full\n");
                        else
                                printf("queue is not full\n");
                        break;
                case 3:
                        printf("enter element to enqueue:\n");
                        scanf("%d",&ele);
                        enqueue(ele);
                        break;
               case 4:
                        printf("enter element to delete:\n");
                        scanf("%d",&ele);
                        ele=dequeue();
                        if(ele!=-1)
                        {
                                printf("element is deleted: %d\n",ele);
                        }
                        break;
             case 5:
                        display();
			break;
	     default: 
			printf("enter valid cases!");
	}
	} while(i != 6);
		free(que.q);
	
		return 0;
}

                        
                                                                             
           
               
        


	




