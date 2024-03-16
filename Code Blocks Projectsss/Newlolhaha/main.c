#include <stdio.h>
#include <stdlib.h>

struct Node
 {
    int data;
    struct Node* next;
};

int main()
{
    struct Node* Node1 = NULL;
    struct Node* Node2 = NULL;
    struct Node* Node3 = NULL;


   Node1 = (struct Node*)malloc(sizeof(struct Node));
   Node2 = (struct Node*)malloc(sizeof(struct Node));
   Node3 = (struct Node*)malloc(sizeof(struct Node));


    Node1 -> data = 1;
    Node1 -> next = Node2;

    Node2 -> data = 2;
    Node2 -> next = Node3;


    Node3 -> data = 3;
    Node3 -> next = NULL;

    display(Node1);
    return 0;
}

void display(struct Node* disp)
{
    while (disp != NULL)
{
        printf(" %d ", disp -> data);
        disp = disp -> next;
    }
}
