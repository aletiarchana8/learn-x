#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
 int size;
 int tos;
 char *s;

}stack;
void push(char ch) {
    stack.s[++stack.tos] = ch;
}
char pop()
{
    if (stack.tos != -1)
    {
        return stack.s[stack.tos--];
    }
    return '\0';
}
char peek() {
    if (stack.tos != -1) {
        return stack.s[stack.tos];
    }
}
char isempty() {
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
		char output[100];
		printf("enter any valid expression:");
		scanf("%s",input);
		{
			stack.tos=-1;
			stack.size=strlen(input);
			stack.s=(char*)malloc(stack.size*sizeof(char));
			int i,j=0;
			for(i=0;i<=stack.size;i++)
			{
				char ch=input[i];
				switch(ch)
				{
					case '(':
					case '[':
					case '{': push(ch);
						  break;

				 	case '+':
					case '-':
					case '/':
					case '*':
						  if (isempty())
						  {
							  push(ch);
						  }
						  else 
							  { while(pre(peek())>=pre(ch))
								  {
									  output[j++]=pop();
								  }
								  push(ch);
							  }
								  break;
					case ')':while((peek())!='(')
						 {
							 output[j++]=pop();
						 }
						 pop();
						 break;
					default:output [j++]=ch;
				}
			}
			while(!isempty())
			{
				output[j++]=pop();
			}
			output[j]='\0';
		
			printf("%s",output);
                        free(stack.s);			
	           
			return 0;
	}
}
	

	

												









