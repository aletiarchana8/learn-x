#include <stdio.h>
int main() {
    int a[100], n, i, sum = 0, expected;
    printf("Enter n (numbers from 1 to n+1): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); sum += a[i]; }
    expected = (n + 1) * (n + 2) / 2;
    printf("Missing number = %d", expected - sum);
    return 0;
}
