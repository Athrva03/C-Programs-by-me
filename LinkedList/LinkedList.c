#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to print the elements of the linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n"); // To add a newline after printing the list
}

// Function to create a new node with given data
struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to remove the first element from the linked list
struct Node *removeFirstElement(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    struct Node *temp = head;
    head = head->next;
    printf("Head Node is: %d\n\n",*head);
    free(temp);
    return head;
}

int main()
{
    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Print the linked list
    printf("Original linked list: ");
    printList(head);

    // Remove the first element
    head = removeFirstElement(head);

    // Print the linked list after removing the first element
    printf("Linked list after removing the first element: ");
    printList(head);

    // Free the allocated memory
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
