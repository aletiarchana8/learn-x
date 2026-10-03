#include <stdio.h>
#include <limits.h>
int main() {
    int a[100], n, i, largest = INT_MIN, second = INT_MIN;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        if (a[i] > largest) { second = largest; largest = a[i]; }
        else if (a[i] > second && a[i] != largest) second = a[i];
    }
    printf("Second largest = %d", second);
    return 0;
}
