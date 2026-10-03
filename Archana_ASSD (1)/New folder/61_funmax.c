#include <stdio.h>
int maxArray(int a[], int n) { int i,max=a[0]; for(i=1;i<n;i++) if(a[i]>max) max=a[i]; return max; }
int main() { int a[100],n,i; scanf("%d",&n); for(i=0;i<n;i++) scanf("%d",&a[i]); printf("Maximum = %d",maxArray(a,n)); return 0; }
