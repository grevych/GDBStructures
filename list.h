
#include "gdbs.h"

#ifndef LIST_H_
#define LIST_H_



int list_index ();
int list_count ();
int list_append ();
int list_extend ();
int list_empty ();
int list_insert ();
int list_remove ();
void list_sort ();
void list_reverse ();
Node list_pop ();


DS *List() {
    DS * structure;
    structure = (DS *) malloc( sizeof(DS) );
    structure->head = structure->tail = 0;
    structure->length = 0;
    return structure;
}


int list_insert(DS *list, Node *node) {
    if (! list->head) list->head = list->tail = node;
    list->length++;
    return 1;
}


int list_extend(DS *first_list, DS *second_list) {
    first_list->tail->next = second_list->head;
    first_list->tail = second_list->tail;
    second_list->head = second_list->tail = 0;
    return 1;
}


#endif
