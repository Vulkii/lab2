#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Operand{
    int size;
    int index;
    double *data;
}Operand;

double pop_from_stack_v(Operand **stack);
void push_in_stack_v(Operand **stack, double value);
Operand* createstackopd(int size);
void clearopd_v(Operand **stack);

#endif // VECTOR_H_INCLUDED
