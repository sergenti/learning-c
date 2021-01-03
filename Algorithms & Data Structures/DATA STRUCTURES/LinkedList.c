#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    node *next;
} node;

node *head = NULL;

void push_back(node **, int x);
void push_front(node **, int x);
int pop_back(node **);
int pop_front(node **);
void print(node *);

int main()
{

    printf("Rimosso: %i\n", pop_front(&head));
    push_front(&head, 7);
    printf("Rimosso: %i\n", pop_front(&head));
    push_back(&head, 5);
    push_back(&head, 3);
    printf("Rimosso: %i\n", pop_back(&head));
    push_back(&head, 1);
    printf("Rimosso: %i\n", pop_front(&head));
    push_front(&head, 8);
    print(head);
    return 0;
}

void push_back(node **phead, int v)
{
    node *np = (node *)malloc(sizeof(node));
    np->next = NULL;
    np->value = v;
    if (head == NULL)
    {
        *phead = np;
    }
    else
    {
        while (head->next != NULL)
            head = head->next;
        head->next = np;
    }
}

void push_front(node **phead, int v)
{
    node *np = (node *)malloc(sizeof(node));
    node *head = *phead;
    np->value = v;
    if (head == NULL)
    {
        *phead = np;
        np->next = NULL;
    }
    else
    {
        np->next = head;
        *phead = np;
    }
}

int pop_back(node **phead)
{
    node *head = *phead, *prevhead;
    int v;
    if (head == NULL)
    {
        printf("List is already empty\n");
    }
    else
    {
        if (head->next == NULL)
        {
            v = head->value;
            free(head);
            *phead = NULL;
        }
        else
        {
            while (head->next != NULL)
            {
                prevhead = head;
                head = head->next;
            }
            prevhead->next = NULL;
            v = head->value;
            free(head);
        }
    }
    return v;
}

int pop_front(node **phead)
{
    node *head = *phead, *t;
    int v;
    if (head == NULL)
    {
        printf("List is already empty\n");
    }
    else
    {
        v = head->value;
        t = head;
        *phead = head->next;
        free(t);
        return v;
    }
}

void print(node *head)
{
    if (head == NULL)
        return;
    while (head->next != NULL)
    {
        printf("%i", head->value);
        head = head->next;
    }
    printf("%i\n", head->value);
}