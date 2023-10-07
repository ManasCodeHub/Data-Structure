#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *deleteAtMiddle(struct node *head, int index) {
    struct node *ptr;
    int counter = 0;
    ptr = head;
    while (counter!=index)
    {
        ptr = ptr->next;
        counter++;
    }
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
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

    head = deleteAtMiddle(head, 1);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}