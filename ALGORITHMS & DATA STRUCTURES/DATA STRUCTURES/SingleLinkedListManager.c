// Single Linked Manager List Implementation in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int choice;
int data;
int length;
bool execution = true;

// Structure

typedef struct node
{
    int data;
    struct node *link;
} node;

node *root = NULL;

/* ======================================================================
** INSTRCUT FUNCTION: gives instrcutions & collects user's choice
*/

void instruct(int *choice)
{
    printf("\033[1;36mLINKED LIST MANAGEMENT INTERFACE\n");
    printf("Enter your Choice:\n\n");

    printf("1) Add node at the end\n");
    printf("2) Add node at the beginning\n");
    printf("3) Add node after another node\n");
    printf("4) Length of the list\n");
    printf("5) Display all the nodes\n");
    printf("6) Delete a node\n");
    printf("7) Quit\033[0m\n\n");

    scanf("%d", choice);
}

/* ======================================================================
** IS EMPTY FUNCTION: checks if list is empty
*/

bool isEmpty()
{
    return (root == NULL) ? true : false;
}

/* ======================================================================
** APPEND FUNCTION: adds element at the end of the list
*/

void append()
{
    node *temp;
    temp = (node *)malloc(sizeof(struct node));
    printf("enter node data:");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (root == NULL) // Check if list is empty
        root = temp;
    else
    {
        node *p;
        p = root;

        while (p->link != NULL) // travel only if there is another node
        {
            p = p->link;
        }

        p->link = temp; // connection
    }
}

/* ======================================================================
** ADD AFTER FUNCTION: return how many nodes are in the list, we are not counting the root
*/

void addAtBeginning()
{
    node *temp;
    temp = (node *)malloc(sizeof(struct node));
    printf("enter node data:");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (root == NULL)
        root = temp;
    else
    {
        temp->link = root; // right connection first
        root->link = temp;
    }
}

/* ======================================================================
** ADD AFTER FUNCTION: return how many nodes are in the list, we are not counting the root
*/

void addAfter()
{
}

/* ======================================================================
** ADD AFTER FUNCTION: return how many nodes are in the list, we are not counting the root
*/

void delete ()
{
}

/* ======================================================================
** LENGTH FUNCTION: return how many nodes are in the list, we are not counting the root
*/

void getLength()
{
    node *temp;
    temp = root;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    printf("length is: %d", count);
}

/* ======================================================================
** DISPLAY FUNCTION: return how many nodes are in the list, we are not counting the root
*/

void display()
{
    node *temp;
    temp = root;

    if (temp != NULL)
        printf("List is empty");
    else
    {
        while (temp->link != NULL) // travel only if there is another node
        {
            printf("%d ---> ", temp->data);
            temp = temp->link; // go to next node
        }

        printf("\n\n");
    }
}

/* ======================================================================
** MAIN METHOD
*/

int main()
{
    // if top: -1 stack is empty

    while (execution)
    {
        instruct(&choice);

        switch (choice)
        {
        case 1:
            printf("\nenter element: ");
            scanf("%d", &data);
            append(data);
            break;
        case 2:
            addAtBeginning();
            break;
        case 3:
            addAfter();
            break;
        case 4:
            getLength();
            break;
        case 5:
            Display(0);
            break;
        case 6:
            Display(0);
            break;
        case 7:
            exit(1);
        default:
            printf("\n\033[1;31mInvalid input\033[0m\n\n");
        }
    }
}