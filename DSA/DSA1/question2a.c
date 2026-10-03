#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stack {
    int tos;
    int size;
    char *s;
} stack;
void push(char ch) {
    stack.s[++stack.tos] = ch;
}

void pop() {
    if (stack.tos != -1) {
        stack.tos--;
    }
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

    
int main(){
	char str[100];
	printf("enter valid string input:" );
	scanf("%s",str);
	stack.tos=-1;
	stack.size=strlen(str);
	stack.s=(char*)malloc(stack.size*sizeof(char));
	int flag=0,i;
	for(i=0;i<stack.size;i++)
	{
		char ch=str[i];
		switch(ch)
		{
		 	case '(':
            	 	case '[':
            		case '{':
				push(ch);
				break;
			case ')':
				if(peek()=='(')
				{
					pop();
				}
				else
				{
					flag++;
				}
				break;
		     	case ']':
				if(peek()=='[')
				{
					pop();
				}
				else
				{
					flag++;
				}
				break;
			case'}':
                                if(peek()=='{')
                                {
                                        pop();
                                }
                                else
                                {
                                        flag++;
                                }
                                break;

		}
	
		
			if(flag!=0)
			{
			break;
			}
	}           
	    if(flag==0 && i==stack.size && isempty())
	    {
		    printf("balanced");
	    }
	    else
	    {
		    printf("not balanced");
	    }
	    return 0;
}
