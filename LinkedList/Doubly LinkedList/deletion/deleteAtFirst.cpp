#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *deleteAtFirst(struct node *head) {
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}


int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 20;
    head->next = first;

    first->prev = head;
    first->data = 30;
    first->next = second;

    second->prev = first;
    second->data = 40;
    second->next = NULL;

    head = deleteAtFirst(head);
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}