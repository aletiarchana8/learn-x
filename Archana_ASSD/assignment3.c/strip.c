#include<stdio.h>
int main()
{
	int n,i;
	char str[100];
	printf("enter the string of mixed characters:");
        scanf("%[^\n]",str);
	  printf("the string characters are: ");

	for (i=0; str[i]!='\0'; i++)

	{
		if((str[i]>='A' && str[i]<='Z') ||
		   (str[i]>='a'&& str[i]<='z'))	
		{
	printf("%c",str[i]);
		}
	}
	return 0;
}

	



