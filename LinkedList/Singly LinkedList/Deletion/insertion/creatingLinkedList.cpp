#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void traversing(struct node *ptr) {
    while (ptr!= NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->link;
    }
    
} 

int main()
{
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL; 
    struct node *third = NULL; 

    head = (struct node *)malloc(sizeof(struct node));

    first = (struct node *)malloc(sizeof(struct node));

    second = (struct node *)malloc(sizeof(struct node));

    third = (struct node *)malloc(sizeof(struct node));
    
    head->data = 10;
    head->link = first;

    first->data = 20;
    first->link = second;

    second->data = 30;
    second->link = third;

    third->data = 40;
    third->link = NULL;

    traversing(head);

    

    return 0;
}
