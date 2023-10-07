#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *insertAtFirst(struct node *head, int data) {
    struct node *entry = (struct node *)malloc(sizeof(struct node));
    entry->next = head;
    entry->prev = NULL;
    entry->data = data;
    head = entry;
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

    head = insertAtFirst(head, 10);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}