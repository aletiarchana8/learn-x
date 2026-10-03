#include <stdio.h>
#include <limits.h>
int main() {
    int a[100], n, i, smallest = INT_MAX, second = INT_MAX;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        if (a[i] < smallest) { second = smallest; smallest = a[i]; }
        else if (a[i] < second && a[i] != smallest) second = a[i];
    }
    printf("Second smallest = %d", second);
    return 0;
}
