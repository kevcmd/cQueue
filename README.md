# C++ queue implementation

## Usage
```
#include "queue.h"

cQueue q;
Queue* li = q.initQueue();

q.enqueue(li, 0, 100);
q.enqueue(li, 1, 150);
q.enqueue(li, 2, 200);

int key = 2;

if(queueNotEmpty(li))
{
    if(q.updateKey(li, key, 100) < 0)
      q.enqueue(li, key, 100);
}

q.dequeueAll(li);

```