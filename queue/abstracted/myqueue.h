#ifndef MYQUEUE_H
#define MYQUEUE_H
#define QUEUE_EMPTY INT_MIN

typedef struct {
    int *values;
    int head, tail, num_entries, size;
} queue;

queue* q_create(int max_size);
bool queue_empty(queue * q)
bool queue_full(queue * q)
void queue_destroy(queue *q)
bool enqueue(queue *q, int value)
int dequeue(queue *q)
#endif
