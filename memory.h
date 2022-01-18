#ifndef radon_memory_h
#define radon_memory_h

#include "common.h"

#define GROW_CAPACITY(capacity)\
((capacity) < 6 ? 6 : (capacity)*2)

#define GROW_ARRAY(type,pointer,oldCount,newCount) \
reallocate (pointer,sizeof(type)*(oldCount),sizeof(type) * (newCount))            // my own change

#define FREE_ARRAY(type,pointer,oldCount) \
(type*)reallocate(pointer,sizeof(type)*(oldCount),0)

void *reallocate(void *pointer,size_t oldSize,size_t newSize);





#endif // radon_memory_h
