
#include "gdbs.h"

#ifndef STACK_H_
#define STACK_H_



int stack_empty ();
int stack_length ();
Node *stack_pop ();
int stack_push ();


DS* Stack() {
    DS * structure;
    structure = (DS *) malloc( sizeof(DS) );
    structure->head = structure->tail = 0;
    structure->length = 0;
    return structure;
}


int stack_empty(DS *stack) {
    if (! stack->head) return 1;
}


int stack_length(DS *stack) {
    return stack->length;
}


Node * stack_pop(DS *stack) {
    if (stack_empty(stack)) return 0;

    Node * aux;
    aux = stack->head;
    stack->head = stack->head->next;
    aux->next = 0;
    stack->length--;
    return aux;
}


int stack_push(DS *stack, Node *node) {
    node->next = stack->head;
    stack->head = node;
    stack->length++;
    return 1;
}


#endif