
#include "gdbs.h"

#ifndef LIST_H_
#define LIST_H_



int list_index (Node);
int list_count (void);
bool list_append (Node);
bool list_extend (DS);
bool list_empty (void);
bool list_insert (Node);
bool list_remove (Node);
void list_sort (void);    //cmp function
void list_reverse (void);
Node list_pop (void);



DS* List() {
    structure = (DS *) malloc( sizeof(DS) );
	structure -> head = structure -> tail = NULL;
	structure -> length = 0;
	
    structure.index = list_index;
    structure.count = list_count;
    structure.append = list_append;
    structure.extend = list_extend;
    structure.empty = list_empty;
    structure.insert = list_insert;
    structure.remove = list_remove;
    structure.sort = list_sort;
    structure.reverse = list_reverse;
    structure.pop = list_pop;
	
	return structure;
}



#endif