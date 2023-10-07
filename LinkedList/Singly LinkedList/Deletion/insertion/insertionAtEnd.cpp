#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *ptr) {
    while(ptr!=NULL) {
        cout<<"Element: " << ptr->data<< endl;
        ptr = ptr->next;
    }
}

struct node * insertAtEnd(struct node *head, int data) {
    struct node *tp = (struct node *)malloc(sizeof(struct node));
    struct node *temp = (struct node *)malloc(sizeof(struct node));
  
    temp->data = data;
    temp->next = NULL;

    tp=head;

    while(tp!=NULL) {
        if(tp->next==NULL)
            tp->next = temp;
            temp->next = NULL;
        tp = tp->next;
    }
    return head;
}

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;
    head = insertAtEnd(head, 100);
    traverse(head);
    return 0;
}