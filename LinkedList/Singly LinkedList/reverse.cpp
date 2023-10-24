#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *reverse(struct node *head)
{
    struct node *prev, *curr, *forward;
    prev = NULL;
    curr = head;
    forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    struct node * prev = reverse(head);
    ptr = prev;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    return 0;
}