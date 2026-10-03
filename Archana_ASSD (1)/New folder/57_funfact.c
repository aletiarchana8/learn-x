#include <stdio.h>
long long factorial(int n) { long long f=1; int i; for(i=1;i<=n;i++) f*=i; return f; }
int main() { int n; scanf("%d",&n); printf("Factorial = %lld",factorial(n)); return 0; }
