#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

 node *create(int data)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->next = head;
    head->data = data;
    return head;
}

void displayList(node *head) {
    node *current;
    current = head;
    while (current!=head)
    {
        cout << current->data;
        current = current->next;
    }
    
}

int main()
{
    node *head;
    create(10);
    head = create(20);

    displayList(head);

    return 0;
}