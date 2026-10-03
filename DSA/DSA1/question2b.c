#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
 int size;
 int tos;
 int *s;

}stack;
void push(int ele) {
    stack.s[++stack.tos] = ele;
}
int pop()
{
    if (stack.tos != -1)
    {
        return stack.s[stack.tos--];
    }
    return -1;
}
int peek() {
    if (stack.tos != -1) {
        return stack.s[stack.tos];
    }
    return -1;
}
int isempty() {
    if (stack.tos == -1) {
        return 1;
    }
    return 0;
}
int pre(char ch)
{


        switch(ch)
        {
                case '+':
                case '-': return 1;
                case '*':
                case '/': return 2;
                case '(': return 0;
                default: return -1;
        }
}

int main()
  { 
	char input[100];
	printf("enter any valid expression:" );
	scanf("%s",input);
	stack.tos = -1;
	int len = strlen(input);
	stack.size = len;
	stack.s = (int*)malloc(stack.size*sizeof(int));
	if(stack.s == NULL)
	{
		printf("No Memory\n");
		return -1;
	}
	int a,b,i,r;
		for(i=0;i<len;i++)
		{
			char ch=input[i];
			switch(ch)
			{
				case '+': a=pop();
					  b=pop();
					  r=b+a;
					  push(r);
					  break;
				case'-':a=pop();
					b=pop();
					r=b-a;
					push(r);
					break;

				case '*':a=pop();
					 b=pop();
					 r=b*a;
					 push(r);
					 break;

				case '/':a=pop();
					 b=pop();
					 r=b/a;
					 push(r);
					 break;
				default: r=ch-'0';
					 push(r);
			}
		}
		printf("%d",pop());
		free(stack.s);
		return 0;
	}
