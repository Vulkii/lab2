#include "Vector.h"

void clearopd_v(Operand **stack){
    free((*stack)->data);
    free(*stack);
    *stack = NULL;
}


Operand* createstackopd(int size){
    Operand *out = NULL;
    out =  malloc(sizeof(Operand));
    out->size = size;
    out->index = 0;
    out->data = malloc(out->size * sizeof(int));
    return out;
}


void push_in_stack_v(Operand **stack, double value){
    if((*stack)->index >= (*stack)->size){
        printf("Stack overflow!1");
        clearopd_v(stack);
    } else {
        (*stack)->data[(*stack)->index] = value;
        (*stack)->index++;
    }
}


double pop_from_stack_v(Operand **stack){
    return (*stack)->data[--(*stack)->index];
}
