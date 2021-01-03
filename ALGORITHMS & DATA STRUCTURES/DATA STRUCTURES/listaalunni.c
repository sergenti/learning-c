#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 30

typedef struct student
{
    char name[MAX_CHAR];
    char family_name[MAX_CHAR];
    int birthyear;
    double avg;
} student;

int compare_by_birthdate(const void *a, const void *b)
{
    student *s1 = (student *)a;
    student *s2 = (student *)b;
    return s1->birthyear - s2->birthyear;
}

int compare_by_fullname(const void *a, const void *b)
{
    student *s1 = (student *)a;
    student *s2 = (student *)b;
    return strcmp(s1->family_name, s2->family_name) + strcmp(s1->name, s2->name);
}

typedef struct node
{
    student value;
    struct node *next;
} node;

node *insert(node *, student, int);
node *insert_on_head(node *, student);
node *insert_on_queue(node *, student);
int length(node *);
void print(node *);
void destroy(node *);

int main(void)
{
    student classe[5];

    student s1;
    strcpy(s1.name, "AA");
    strcpy(s1.family_name, "AAA");
    s1.birthyear = 2005;
    s1.avg = 28.5;

    student s2;
    strcpy(s2.name, "CC");
    strcpy(s2.family_name, "CCC");
    s2.birthyear = 2010;
    s2.avg = 28.5;

    student s3;
    strcpy(s3.name, "BB");
    strcpy(s3.family_name, "BBB");
    s3.birthyear = 1996;
    s3.avg = 28.5;

    classe[0] = s1;
    classe[1] = s2;
    classe[2] = s3;

    qsort(classe, 3, sizeof(student), compare_by_fullname);

    for (int i = 0; i < 3; i++)
        printf("%s ", classe[i].family_name);

    return 0;
}

int length(node *head)
{
    int count = 0;

    node *current;
    for (current = head; current != NULL; current = current->next)
        count++;

    return count;
}

node *insert_on_head(node *head, student s)
{
    return insert(head, s, 0);
}

node *insert_on_queue(node *head, student s)
{
    return insert(head, s, length(head));
}

node *insert(node *head, student s, int pos)
{
    if (pos < 0 || pos > length(head))
        return head;

    node *p = (node *)malloc(sizeof(node));
    p->value = s;
    p->next = NULL;

    if (head == NULL)
        head = p;

    else
    {
        int count = 0;

        node *current = head;
        while (count < pos - 1)
        {
            count++;
            current = current->next;
        }

        node *temp = current->next;
        current->next = p;
        p->next = temp;
    }

    return head;
}

void print(node *head)
{
    node *current;
    for (current = head; current != NULL; current = current->next)
        printf("%s ", current->value.family_name);

    printf("\n");
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