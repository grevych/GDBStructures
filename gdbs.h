#include <stdlib.h>

#ifndef DS_H_
#define DS_H_


typedef struct node { 
    void *elem;
    struct node *next;
    struct node *prev;
 
} Node;


typedef struct ds {  
    int length;
    Node *head;
    Node *tail;
    // int (*index)();
    // int (*count)();
    // int (*append)();
    // int (*extend)();
    // int (*empty)();
    // int (*insert)();
    // int (*remove)();
    // int (*sort)();    //cmp function
    // void (*reverse) ();
    // Node (*pop) ();
    // Node (*push) ();

} DS;



Node * ND(void *e) {
    Node * node = (Node *) malloc( sizeof(Node) );
    node->next = NULL;
    node->prev = NULL;
    node->elem = e;
    return node;
}



#endif