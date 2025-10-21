#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node * turtle = head;
    node * rabbit = head;
    if(head == NULL)return 0;

    do{
        for(int i =0;i<2;i++){
            if(rabbit->next == NULL){
                return 0;
            }
            rabbit = rabbit->next;
        }
        turtle = turtle->next;
    }while( turtle != rabbit);
    return 1;
}