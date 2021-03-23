#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct node
{
    double value;
    struct node *next;
};

struct myStack
{
    struct node *pointer;
    double count;
};

struct myStack *create_stack(){
    struct myStack *temp = (struct myStack *)malloc(sizeof(struct myStack));
    temp->pointer = NULL;
    temp->count = 0;
    return temp;
}


void delete_element(struct node *elem);
void delete_stack(struct myStack *st);
int stack_is_empty(struct myStack *st);
void push_to_stack(struct myStack *st, double value);
double pop_from_stack(struct myStack *st);
int stack_size(struct myStack *st);

#endif // LIST_H_INCLUDED
