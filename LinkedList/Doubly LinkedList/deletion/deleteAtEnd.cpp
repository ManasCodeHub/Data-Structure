#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *deleteAtEnd(struct node *head) {
    struct node *ptr;
    ptr = head;
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }

    ptr->prev->next = NULL;
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

    head = deleteAtEnd(head);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}