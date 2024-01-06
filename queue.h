#include <stdlib.h>
 
typedef struct Item {
    int key;
    int value;
    struct Item* next;
} Item;

typedef struct Queue {
    Item* front;
    Item* rear;
} Queue;

class cQueue {
  public:
Item* newItem(int key, int value);

Queue* initQueue();

void enqueue(Queue* queue, int key, int value);//enqueue new item with key and value

int dequeue(Queue* queue, int key);//dequeue by key

void dequeueAll(Queue* queue);//dequeue all

int queueNotEmpty(Queue* queue);//returns 0 if queue empty or 1 if not empty

int getCount(Queue* queue);//return number of items in queue

int getByKey(Queue* queue, int key);//return value stored at queue by it's key

int updateKey(Queue* queue, int key, int value);//update value stored at queue by it's key

};
