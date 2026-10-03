#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->left = p->right = NULL;
    return p;
}

struct Node* insert(struct Node *r, int x) {
    if (r == NULL) return newNode(x);

    if (x < r->data)
        r->left = insert(r->left, x);
    else
        r->right = insert(r->right, x);

    return r;
}

struct Node* minNode(struct Node *r) {
    while (r->left)
        r = r->left;
    return r;
}

struct Node* deleteNode(struct Node *r, int x) {
    struct Node *t;

    if (!r) return NULL;

    if (x < r->data)
        r->left = deleteNode(r->left, x);
    else if (x > r->data)
        r->right = deleteNode(r->right, x);
    else {
        if (!r->left) {
            t = r->right;
            free(r);
            return t;
        }

        if (!r->right) {
            t = r->left;
            free(r);
            return t;
        }

        t = minNode(r->right);
        r->data = t->data;
        r->right = deleteNode(r->right, t->data);
    }

    return r;
}

void inorder(struct Node *r) {
    if (r) {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}

void preorder(struct Node *r) {
    if (r) {
        printf("%d ", r->data);
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(struct Node *r) {
    if (r) {
        postorder(r->left);
        postorder(r->right);
        printf("%d ", r->data);
    }
}

int height(struct Node *r) {
    int l, h;

    if (!r) return 0;

    l = height(r->left);
    h = height(r->right);

    return 1 + (l > h ? l : h);
}

int count(struct Node *r) {
    if (!r) return 0;
    return 1 + count(r->left) + count(r->right);
}

void mirror(struct Node *r) {
    struct Node *t;

    if (r) {
        t = r->left;
        r->left = r->right;
        r->right = t;

        mirror(r->left);
        mirror(r->right);
    }
}

void levelOrder(struct Node *r) {
    struct Node *q[100];
    int front = 0, rear = 0;

    if (!r) return;

    q[rear++] = r;

    while (front < rear) {
        r = q[front++];
        printf("%d ", r->data);

        if (r->left) q[rear++] = r->left;
        if (r->right) q[rear++] = r->right;
    }
}

int main() {
    struct Node *root = NULL;
    int choice, x, n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insert(root, x);
    }

    do {
        printf("\n\n--- BST MENU ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Inorder");
        printf("\n4. Preorder");
        printf("\n5. Postorder");
        printf("\n6. Mirror");
        printf("\n7. Height");
        printf("\n8. Count Nodes");
        printf("\n9. Level Order");
        printf("\n0. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &x);
                root = deleteNode(root, x);
                break;

            case 3:
                printf("Inorder: ");
                inorder(root);
                break;

            case 4:
                printf("Preorder: ");
                preorder(root);
                break;

            case 5:
                printf("Postorder: ");
                postorder(root);
                break;

            case 6:
                mirror(root);
                printf("Mirror created.");
                break;

            case 7:
                printf("Height: %d", height(root));
                break;

            case 8:
                printf("Nodes: %d", count(root));
                break;

            case 9:
                printf("Level Order: ");
                levelOrder(root);
                break;

            case 0:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 0);

    return 0;
}

