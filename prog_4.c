#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    if (prevNode->next != NULL)
        prevNode->next->prev = newNode;
    prevNode->next = newNode;
}

void deleteNode(struct Node** head, struct Node* delNode) {
    if (*head == NULL || delNode == NULL)
        return;
    if (*head == delNode)
        *head = delNode->next;
    if (delNode->next != NULL)
        delNode->next->prev = delNode->prev;
    if (delNode->prev != NULL)
        delNode->prev->next = delNode->next;
    free(delNode);
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(10);
    insertAfter(head, 20);
    insertAfter(head->next, 30);
    insertAfter(head, 15);

    printf("Doubly linked list: ");
    printList(head);

    deleteNode(&head, head->next);

    printf("After deletion: ");
    printList(head);

    return 0;
}
