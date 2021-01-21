#ifndef CONTAINER_H
#define CONTAINER_H

typedef struct {
    unsigned int capacity;
    unsigned int size; 
    int *data;
} Container;

Container* container_init(unsigned int n);

void container_fill(Container* container);

void container_print(Container* container);

void container_destruct(Container* container);

#endif // CONTAINER_H