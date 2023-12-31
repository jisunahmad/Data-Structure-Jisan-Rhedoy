#include<stdio.h>
#include<stdlib.h>

// Define a structure named 'node' with an integer 'data' and a pointer to the same structure type 'link'.
struct node
{
    int data;
    struct node *link;
};

int main()
{
    // Allocate memory for the first 'struct node' and assign its address to the 'head' pointer.
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45; // Initialize the 'data' member of 'head' to 45.
    head->link = NULL; // Set the 'link' member of 'head' to NULL.

    // Allocate memory for the second 'struct node' and assign its address to the 'node1' pointer.
    struct node *node1 = (struct node*)malloc(sizeof(struct node));
    node1->data = 98; // Initialize the 'data' member of 'node1' to 98.
    node1->link = NULL; // Set the 'link' member of 'node1' to NULL.

    // Allocate memory for the third 'struct node' and assign its address to the 'node2' pointer.
    struct node *node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 45; // Initialize the 'data' member of 'node2' to 45.
    node2->link = NULL; // Set the 'link' member of 'node2' to NULL.

    // Create a linked list by setting the 'link' members to connect 'head' to 'node1' and 'node1' to 'node2'.

    // Print the 'data' members of 'head', 'node1', and 'node2'.
    printf("%d %d %d \t", head->data, node1->data, node2->data);

    return 0;
}
