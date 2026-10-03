#include <stdio.h>
int sumArray(int a[], int n) { int i,sum=0; for(i=0;i<n;i++) sum+=a[i]; return sum; }
int main() { int a[100],n,i; scanf("%d",&n); for(i=0;i<n;i++) scanf("%d",&a[i]); printf("Sum = %d",sumArray(a,n)); return 0; }
