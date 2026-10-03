#include <stdio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    printf("Array length = %d", (int)(sizeof(a) / sizeof(a[0])));
    return 0;
}
