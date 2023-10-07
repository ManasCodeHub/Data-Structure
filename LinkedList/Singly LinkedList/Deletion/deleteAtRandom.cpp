#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *deleteAtRandom(struct node *head, int index)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    int counter = 0;
    while (counter != index)
    {
        ptr1 = ptr;
        ptr = ptr->next;
        counter++;
    }
    ptr1->next = ptr->next;
    free(ptr);
    return head;
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

    head = deleteAtRandom(head, 1);
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}