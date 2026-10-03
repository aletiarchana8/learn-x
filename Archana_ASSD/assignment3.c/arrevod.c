#include<stdio.h>
int main()
{
	int arr[100], even[100], odd[100];
	int n, i;
	int evencount = 0, oddcount = 0;
	 printf("enter no.of elements in array: ");
		scanf("%d",&n);
	printf("enter the %d elements:",n);
	  for (i=0;i<n;i++)
	  {
		  scanf("%d",&arr[i]);
	  }
	  for (i=0; i<n; i++)
	  {
		  if(arr[i] %2 ==0)
		  {
			 even[evencount]=arr[i];
			  evencount++;
		  }
		  else
		  {
			  odd[oddcount]=arr[i];
		  	  oddcount++;
	}
	  }
	 printf("\nthe even elements are:");
	 for(i=0;i<evencount;i++)
	 {
		 printf("%d ",even[i]);
	 }
	 printf("\nthe odd elements are:");
	 for(i=0; i<oddcount; i++)
	 {
		 printf("%d ",odd[i]);
	 }
        return 0;
}






			

