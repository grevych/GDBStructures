
#include <stdio.h>
#include "list.h"
// #include "stack.h"
// #include "queue.h"



int main(int argc, char **argv) {

    DS *list;
    Node *node;
    char a = 'a';

    list = List();
    node = ND((void *) &a);
    list_insert(list, node);

    printf("\n%c", *(char *) list->head->elem);
    return 0;
}
