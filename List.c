#include "List.h"




void delete_element(struct node *elem)
{
    if (elem->next) delete_element(elem->next);
    free(elem);
}

void delete_stack(struct myStack *st)
{
    if (!st) return;
    if (st->pointer) delete_element(st->pointer);
    free(st);
}

void push_to_stack(struct myStack *st, double value)
{
    if (!st) return;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->value = value;
    if (!st->pointer) { temp->next = NULL; st->pointer = temp; }
    else { temp->next = st->pointer; st->pointer = temp; }
    st->count++;
}

double pop_from_stack(struct myStack *st)
{
    if (!st || !st->pointer) return 0;
    double value = st->pointer->value;
    struct node *del = st->pointer;
    st->pointer = st->pointer->next;
    free(del);
    st->count--;
    return value;
}

int stack_size(struct myStack *st)
{
    return st->count;
}

int stack_is_empty(struct myStack *st)
{
    return !st->pointer;
}
