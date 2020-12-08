#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

void push_back(struct node **, int);
void push_front(struct node **, int);
int pop_back(struct node **);
int pop_front(struct node **);
void print(struct node *);

int main()
{
    struct node *head = NULL;

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

void push_back(struct node **phead, int v)
{
    struct node *head = *phead;
    struct node *np = (struct node *)malloc(sizeof(struct node));
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

void push_front(struct node **phead, int v)
{
    struct node *np = (struct node *)malloc(sizeof(struct node));
    struct node *head = *phead;
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

int pop_back(struct node **phead)
{
    struct node *head = *phead, *prevhead;
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

int pop_front(struct node **phead)
{
    struct node *head = *phead, *t;
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

void print(struct node *head)
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