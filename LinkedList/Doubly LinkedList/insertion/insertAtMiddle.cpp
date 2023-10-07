#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *insertAtMiddle(struct node *head, int data, int index) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr1;
    struct node *ptr;

    int counter = 0;
    ptr = head;
    while (counter!=index)
    {
        ptr1 = ptr->next;
        counter++;
    }

    newNode->next = ptr1;
    newNode->prev = ptr;
    ptr1->prev = newNode;
    ptr->next = newNode;
    newNode->data = data;
    
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

    head = insertAtMiddle(head, 10, 1);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}