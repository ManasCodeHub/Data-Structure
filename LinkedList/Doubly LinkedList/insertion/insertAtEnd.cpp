#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *insertAtEnd(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    
    ptr = head;
    while(ptr->next!= NULL) {
        ptr= ptr->next;
    }

    newNode->prev = ptr;
    ptr->next = newNode;
    newNode->next = NULL;

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

    head = insertAtEnd(head, 10);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}