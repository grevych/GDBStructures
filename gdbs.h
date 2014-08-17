#ifndef DS_H_
#define DS_H_



typedef struct {  
    int length;
    struct Node *head;
	struct Node *tail;
	int (*index) (Node) = NULL;
	int (*count) (void) = NULL;
	bool (*append) (Node) = NULL;
	bool (*extend) (DS) = NULL;
	bool (*empty) (void) = NULL;
	bool (*insert) (Node) = NULL;
	bool (*remove) (Node) = NULL;
	void (*sort) (void) = NULL;    //cmp function
	void (*reverse) (void) = NULL;
	Node (*pop) (void) = NULL;
    Node (*push) = NULL;

} DS;



typedef struct { 
    void *elem;
    struct Node *next;
    struct Node *prev;
 
} Node;



Node * Node(void *e) {
    node = (Node *) malloc( sizeof(Node) );
    node -> next = NULL;
    node -> prev = NULL;
    node -> elem = e;
    
    return node;
}



#endif