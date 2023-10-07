#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};


int main() {

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *last;

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = head;

    last = second;

    struct node *ptr;
    ptr = head;
    while(ptr!=NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}