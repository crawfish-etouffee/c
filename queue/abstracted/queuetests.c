#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "myqueue.h" 

int main() {
    
    queue *q1 - q_create(5);

    enqueue(q1,56);
    enqueue(q1, 78);
    enqueue(q1, 23);
    enqueue(q1, 988);
    enqueue(q1, 13);
    enqueue(q1, 2);

    int t; 
    while ((t = dequeue(q1)) != QUEUE_EMPTY) {
        printf("t = %d\n", t);
    }
}
