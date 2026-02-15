# doc_doubly_linked_list.md

## Program: Doubly Linked List with Insert and Delete

---

## (a) Data Structure Definition

This program uses a **doubly linked list**. Each node contains:

```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
