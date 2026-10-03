#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

struct Node {
    int key;
    struct Node *next;
};

struct Node *table[SIZE] = {NULL};

int hash(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hash(key);

    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->key = key;
    newNode->next = table[index];
    table[index] = newNode;
}

void display() {
    int i;
    struct Node *temp;

    printf("\nHash Table:\n");

    for (i = 0; i < SIZE; i++) {
        printf("%d : ", i);

        temp = table[i];

        while (temp != NULL) {
            printf("%d -> ", temp->key);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main() {
    int n, i, key;

    printf("Enter number of keys: ");
    scanf("%d", &n);

    printf("Enter keys:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(key);
    }

    display();

    return 0;
}

