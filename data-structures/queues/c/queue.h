/**
* File queue.h
* Declate a Queue functionality
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "queue.h"

// making a queue
void q_init(int size);
// push to queue
void q_push(double num);
// take the first element from queue
double q_pop();
// check if the is a free space in the queue
bool q_freeSpace();
// check the lenght of the queue
int q_size();
// check maxSize of the queue
int q_maxSize();
// clear the queue
void q_clear();
// terminate queue memory
void q_terminate();

#endif