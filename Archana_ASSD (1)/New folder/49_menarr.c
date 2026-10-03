#include <stdio.h>
int main() {
    int a[100], n, i, choice, key, found;
    int sum, max, min, temp;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    do {
        printf("\n1.Display 2.Max 3.Min 4.Sum 5.Average 6.Search 7.Reverse 8.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: for (i = 0; i < n; i++) printf("%d ", a[i]); break;
            case 2: max = a[0]; for (i=1;i<n;i++) if(a[i]>max) max=a[i]; printf("Max=%d",max); break;
            case 3: min = a[0]; for (i=1;i<n;i++) if(a[i]<min) min=a[i]; printf("Min=%d",min); break;
            case 4: sum=0; for(i=0;i<n;i++) sum+=a[i]; printf("Sum=%d",sum); break;
            case 5: sum=0; for(i=0;i<n;i++) sum+=a[i]; printf("Average=%.2f",(float)sum/n); break;
            case 6: printf("Search: "); scanf("%d",&key); found=0; for(i=0;i<n;i++) if(a[i]==key) found=1; printf(found?"Found":"Not found"); break;
            case 7: for(i=0;i<n/2;i++){temp=a[i];a[i]=a[n-1-i];a[n-1-i]=temp;} printf("Array reversed"); break;
            case 8: printf("Exit"); break;
            default: printf("Invalid choice");
        }
    } while (choice != 8);
    return 0;
}
