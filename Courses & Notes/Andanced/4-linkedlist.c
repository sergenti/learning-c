#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *link; // pointing to an user defined data
} node;

node *root = NULL;

void append();
int length();

int main()
{

    /*

    LINKED LISTS

    what? dynamic memory allocation connection type
    collection of element (arrays, stacks, queues) huy DYNAMIC

    there is no way to make a static linked list
    ALWAYS DYNAMIC

    Advantages?

    if in array you want to add a new value between 2 other you have to shift all the elements that comes after
    but accessing is easy using indexes

    very fast to retrive vales
    slow writing / updates

    in a LINKED LIST insertions and deletions are much faster compared to array, stack and queues
    data stored in form of nodes

    no sequential, not linear
    processing is linear but storing is not, not in near blocks of memory

    random location not sequential
    cannot reach one node without travelling from all the previous node
    just create new nodes, no shifting

    user defined data type = struct
    right and left pointer (*left, *right)

    3 TYPES OF LINKED LISTS
    -single linked lists            data , *pointer              2 fields
    -double linked lists            data , *left , *right        3 fields
    -circular linked lists          data , *left , *right        3 fields

    */

    // root = (node *)malloc(sizeof(node)); // always we are maintaining the root, first node address

    /*

    LINKED LIST OPERATIONS

    1) Append (add at end)
    2) Add at beginning
    3) Addinf after a specified node
    4) Delete first node
    5) Delete specified node
    6) Length
    7) Reverse
    8) Swap 2 nodes
    9) Sort elements
    10) Display

    // in JAVA we have collection framework, predefined implementation

    */
}

// Root is GLOBAL (available to everyone)

// Adding at the end
void append()
{
    node *temp;
    temp = (node *)malloc(sizeof(struct node));

    printf("enter node data:");
    scanf("%d", &temp->data); // node information created
    temp->link = NULL;

    if (root == NULL)
        root = temp;
    else
    {
        node *p;
        p = root;
        while (p->link != NULL) // travelling from first to last location
            p = p->link;
        p->link = temp; // connection
    }
}

int length()
{
    node *temp;
    temp = root;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    return count;
}

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

// deleting a node

void delete ()
{
    node *temp;
    int location;

    printf("enter location to delete");
    scanf("%d", location);

    if (location > length())
    {
        printf("invalid location");
    }
    else if (location == 1)
    { // deleting the first node
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else
    {
        int i;
        node *p = root;
        node *q;

        while (i < location - 1)
        { // works both in between and at the end
            p = p->link;
            i++;
            q = p->link;
            p->link = q->link;
            q->link = NULL;
            free(q);
        }
    }
}