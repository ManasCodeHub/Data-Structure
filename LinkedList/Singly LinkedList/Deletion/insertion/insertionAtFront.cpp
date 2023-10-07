#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *insertAtBeg(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void traverse(struct node *ptr) {
    while (ptr!=NULL)
    {
        cout<<"Elemet: " <<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}

int main() {
    struct node *head;
    struct node *second = (struct node *)malloc(sizeof(struct node));
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->next = second;

    second->data = 50;
    second->next = NULL;

    head = insertAtBeg(head, 10);
    traverse(head);
    return 0;
}