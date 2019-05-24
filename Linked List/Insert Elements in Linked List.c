#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

void insert(int num, struct Node **head) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = num;

    if (head == NULL) {
        *head = node;
        node->next = NULL;
    }

    node->next = *head;
    *head = node;
}

int main() {
    struct Node *head = NULL;
    int n;

    printf("Enter the number");
    scanf("%d",&n);

    while(n > 0){
        insert(n,&head);
        printf("Enter the number");
        scanf("%d",&n);
    }

    printf("Printing the linked list");
    struct Node *ptr = head;
    while(ptr->next != NULL) {
        printf("%d ->",ptr->data);
        ptr = ptr->next;
    }
    printf("%d",ptr->data);
    
    return 0;
}
