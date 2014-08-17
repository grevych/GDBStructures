
#include "gdbs.h"

#ifndef STACK_H_
#define STACK_H_



int stack_index (Node);
int stack_count (void);
bool stack_extend (DS);
bool stack_empty (void);
bool stack_push (Node);
Node stack_pop (void);



DS* Stack() {
    structure = (DS *) malloc( sizeof(DS) );
    structure -> head = structure -> tail = NULL;
	structure -> length = 0;
	
	structure.index = stack_index;
    structure.count = stack_count;
    structure.extend = stack_extend;
    structure.empty = stack_empty;
    structure.push = stack_push;
    structure.pop = stack_pop;
    
	return structure;
}



#endif