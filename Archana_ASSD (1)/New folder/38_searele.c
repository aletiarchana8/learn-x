#include <stdio.h>
int main() {
    int a[100], n, i, key, found = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key) found = 1;
    if (found) printf("Element found");
    else printf("Element not found");
    return 0;
}
