#include <stdio.h>
int prime(int n) { int i; if(n<2) return 0; for(i=2;i<n;i++) if(n%i==0) return 0; return 1; }
int main() { int n; scanf("%d",&n); if(prime(n)) printf("Prime"); else printf("Not Prime"); return 0; }
