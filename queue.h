
#include "gdbs.h"

#ifndef QUEUE_H_
#define QUEUE_H_



int queue_index (Node);
int queue_count (void);
bool queue_append (Node);
bool queue_extend (DS);
bool queue_empty (void);
bool queue_remove (Node);



DS* Queue() {
    structure = (DS *) malloc( sizeof(DS) );
    structure -> head = structure -> tail = NULL;
	structure -> length = 0;
	
    return structure;
}



#endif