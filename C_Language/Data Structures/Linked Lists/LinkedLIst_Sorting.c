#include <stdio.h>
#include <stdlib.h>

// student structure
struct student {
    int ID;
    struct student* next;
};

// Function to insert a new node at the beginning of the linked list
void nodeCreat(struct student **head, int ID) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    newNode->ID = ID;
    newNode->next = *head;
    *head = newNode;
}

// Function to print the linked list
void printList(struct student * head) {
    while (head != NULL) {
        printf("%d ", head->ID);
        head = head->next;
    }
    printf("\n");
}

// Function to sort the linked list in ascending order using bubble sort
void bubbleSort(struct student* head) {
    int swapped, temp;
    struct student *ptr=NULL;
    struct student *last = NULL;

    // Checking for empty list
    if (head == NULL) {
        return;
    }

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->ID > ptr->next->ID) {
                temp = ptr->ID;
                ptr->ID = ptr->next->ID;
                ptr->next->ID = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}

int main() {
    struct student* head = NULL;

    // Inserting elements into the linked list
    nodeCreat(&head, 12);
    nodeCreat(&head, 5);
    nodeCreat(&head, 1);
    nodeCreat(&head, 2);
    nodeCreat(&head, 0);

    bubbleSort(head);
    printf("Sorted Linked List: ");
    printList(head);

    return 0;
}
