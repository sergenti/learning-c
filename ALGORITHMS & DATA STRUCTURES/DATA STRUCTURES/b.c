#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;

} node;

node *insert(node *head, int);
node *init(node *head, int array[], int num_elem);
void printlist(node *head);
int sum(node *head);
void destroy(node *head);

int main()
{
    node *head = NULL;
    int array[] = {1, 2, 3, 4};

    head = init(head, array, 4);
    head = insert(head, 2);
    head = insert(head, 3);

    // Concatenatino of methods
    head = insert(init(head, array, 4), 5);
}

node *init(node *head, int array[], int num_elem)
{
    for (int i = 0; i < num_elem; i++)
        head = insert(head, array[i]);

    return head;
}

node *insert(node *head, int val)
{

    node *p = (node *)malloc(sizeof(node));
    p->value = val;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        // fine elemento ultimo
        node *current;
        for (current = head; current->next != NULL; current = current->next)
            ;

        current->next = p;
    }
    return head;
}

void printlist(node *head)
{
    node *current;
    for (current = head; current != NULL; current = current->next)
        printf("%d ", current->value);

    printf("\n");
}

int sum(node *head)
{
    if (head != NULL)
        return head->value + sum(head->next);
}

void destroy(node *head)
{
    node *current = head;
    node *temp;
    while (current != NULL)
    {
        temp = current->next;
        free(current);
        current = temp;
    }
}