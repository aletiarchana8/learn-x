#include <stdio.h>
int palindrome(int n) { int original=n, rev=0, r; while(n>0){r=n%10;rev=rev*10+r;n/=10;} return original==rev; }
int main() { int n; scanf("%d",&n); if(palindrome(n)) printf("Palindrome"); else printf("Not Palindrome"); return 0; }
