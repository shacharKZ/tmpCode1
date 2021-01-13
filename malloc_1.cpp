//
// Created by student on 1/13/21.
//
#include <unistd.h>

void* smalloc(size_t size) {
    if (size <= 0 or size > 10e8) {
        return NULL;
    }
    void* res = sbrk(size);
    if (res == (void*)(-1)) {
        return NULL;
    }
    return res;
}

