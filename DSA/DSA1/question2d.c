#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
	int size;
	int tos;
	int *s;
}
stack;
void push(char ch) {
    stack.s[++stack.tos] = ch;
}
char pop()
{
    if (stack.tos != -1)
    {
        return stack.s[stack.tos--];
    }
    return -1;
}
char peek() {
    if (stack.tos != -1) {
        return stack.s[stack.tos];
    
    }
    return -1;
}
char isempty() {
    if (stack.tos == -1) {
        return 1;
    }
    return 0;
}
char* reversestring(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
int pre(char ch)
{

	switch(ch)
	{       case '+':
		case '-': return 1;
		case'*':
		case '/':return 2;
		case ']': return 0;
		case '}':
		case ')':
		default:return -1;
	}
}
int main()
{       char i,rev, j=0,ans;
	char input[100];
	char output[100];
	printf("enter a infix expresson :");
	scanf("%s",input);


	rev=reversestring(input);
	for(i=0;i<strlen(rev);i++)
	{
		char ch=rev[i];
		switch(ch)
		{
			case ']':
			case ')':
			case '}': push (ch);
			          break;
			case '+': 
			case '-':
			case '/':
			case '*':
				  while (pre(peek())>pre(ch))
				  {
					  output[j++]=pop();
				  }
				  push(ch);
				  break;
		 ans = reversestring(output);

			default:output[j++]=ch;
		}
	}
	while(!isempty())
			
			output[j++]=pop();
			
	ans=reverse output
		printf("ans");
}



			  


