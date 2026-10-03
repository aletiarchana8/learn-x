#include <stdio.h>

void copy(int a[], int b[], int n) {
    int i;
    for (i = 0; i < n; i++)
        b[i] = a[i];
}

void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}


void selectionSort(int a[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}


void bubbleSort(int a[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}


void insertionSort(int a[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}


void quickSort(int a[], int low, int high) {
    int i, j, pivot, temp;

    if (low < high) {
        pivot = a[high];
        i = low - 1;

        for (j = low; j < high; j++) {
            if (a[j] < pivot) {
                i++;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;

        quickSort(a, low, i);
        quickSort(a, i + 2, high);
    }
}


void merge(int a[], int low, int mid, int high) {
    int temp[100];
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    int mid;

    if (low < high) {
        mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    int i, temp;

    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (i = n - 1; i > 0; i--) {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}

int main() {
    int a[100], b[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    copy(a, b, n);
    selectionSort(b, n);
    printf("\nSelection Sort: ");
    display(b, n);

    copy(a, b, n);
    bubbleSort(b, n);
    printf("Bubble Sort:    ");
    display(b, n);

    copy(a, b, n);
    insertionSort(b, n);
    printf("Insertion Sort: ");
    display(b, n);

    copy(a, b, n);
    quickSort(b, 0, n - 1);
    printf("Quick Sort:     ");
    display(b, n);

    copy(a, b, n);
    mergeSort(b, 0, n - 1);
    printf("Merge Sort:     ");
    display(b, n);

    copy(a, b, n);
    heapSort(b, n);
    printf("Heap Sort:      ");
    display(b, n);

    return 0;
}

