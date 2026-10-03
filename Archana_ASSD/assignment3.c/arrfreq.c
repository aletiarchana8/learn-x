#include<stdio.h>
int main(){
	int arr[100],n,count,i,j,visited[100]={0};
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter the array elements");
        for (i=0; i<n; i++){
		
		scanf("%d",&arr[i]);
	}
	printf("frequency of elements\n");
	      for (i=0; i<n; i++)
	      {
		      if (visited[i]==1)
			      continue;
		      count=1;
		      for (j=i+1; j<n; j++)
		      {
			      if (arr[i]==arr[j])
			      {
			      count++;
			      visited[j]=1;
		      }
		      }
		      printf("%d occurs %d times\n",arr[i],count);
		      }
		      return 0;

                    }
	


