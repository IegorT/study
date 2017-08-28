/**
* File queue.c
* Implement a Queue functionality
*/
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "queue.h"

static double *queue = 0;
static int maxSize = 0;
static int start = 0;
static int length = -1;

// making a queue
void q_init(int size) {
    maxSize = size;
    assert(queue == 0);
    queue = (double*) malloc(maxSize * sizeof(double));
    assert(queue != NULL);
    length = 0;
}

// push to queue
void q_push(double num){
    // if queue start and there is enough space
    assert(queue != 0 && length < maxSize);
    queue[(start+length)%maxSize] = num;
    length++;
}

// take the first element from queue
double q_pop() {
    assert(length > 0);
    double pop = queue[start];
    start = (start+1)%maxSize;
    length--;
    return pop;
}

// check if the is a free space in the queue
bool q_freeSpace(){
    return (length < maxSize);
}

// check the lenght of the queue
int q_size(){
    return length;
}

// check maxSize of the queue
int q_maxSize(){
    return maxSize;
}

// clear the queue
void q_clear() {
    start = 0;
    length = 0;
}

// terminate queue memory
void q_terminate(){
    free(queue);
}


