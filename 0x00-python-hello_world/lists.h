#ifndef LISTS_H
#define LISTS_H

// Structure representing a node in the list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node with the given data
Node* createNode(int data);

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node** head, int data);

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int data);

// Function to insert a node after a specific node in the list
void insertAfter(Node* prevNode, int data);

// Function to delete a node with the given data from the list
void deleteNode(Node** head, int data);

// Function to search for a node with the given data in the list
Node* search(Node* head, int data);

// Function to display the contents of the list
void displayList(Node* head);

#endif /* LISTS_H */
