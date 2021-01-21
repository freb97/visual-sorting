#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "container.h"

Container* container_init(unsigned int n) {
    Container *container = malloc(sizeof(Container));

    container->data = malloc(n * sizeof(unsigned int));
    container->capacity = n;
    container->size = n;

    return container;
}

void container_fill(Container* container) {
    srand(clock());

    for (int i = 0; i < container->size; i++) {
        while (1) {
            int pos = rand() % container->size;

            if (container->data[pos] != 0) {
                continue;
            }

            container->data[pos] = i + 1;
            break;
        }
    }
}

void container_print(Container* container) {
    printf("\n");

    for (int i = container->size - 1; i >= 0; i--) {
        for (int ii = 0; ii < container->size; ii++) {
            if (container->data[ii] > i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void container_destruct(Container* container) {
    free(container->data);
    container->capacity = 0;
    container->size = 0;
    free(container);
}