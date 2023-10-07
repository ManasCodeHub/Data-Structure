#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct node *insertAtRandom(struct node *head, int index, int data)
{
struct node *temp = (struct node *)malloc(sizeof(struct node));
struct node *ptr = (struct node *)malloc(sizeof(struct node));

temp->next = NULL;
temp->data = data;

ptr = head;
int counter = 0;

while(counter!=index) {
    ptr = ptr->next;
    counter++;
}

temp->next = ptr->next;
ptr->next = temp;

return head;

}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    head = insertAtRandom(head, 1, 30);
    traverse(head);

    return 0;
}