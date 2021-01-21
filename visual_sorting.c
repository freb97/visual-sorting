#include <stdio.h>
#include <stdlib.h>

#include "src/container.h"
#include "src/sort.h"

Container* init() {
    system("clear");

    int quantity;

    printf("Enter number of elements in array:\n");
    scanf("%d", &quantity);
    
    Container *container = container_init(quantity);
    container_fill(container);

    return container;
}

int chooseAlgorithm() {
    system("clear");

    int algorithm;

    printf("Enter number of sorting algorithm (Bubblesort: 1, Quicksort: 2)\n");
    scanf("%d", &algorithm);

    return algorithm;
}

int main() {
    Container* container = init();
    int algorithm = chooseAlgorithm();

    system("clear");

    printf("Generated array:\n");
    container_print(container);

    printf("\nPress Enter to sort");
    fflush(stdin);
    getchar();

    if (algorithm == 1) {
        bubblesort(container);
    } else if (algorithm == 2) {
        quicksort(container, 0, container->size - 1);
    }

    system("clear");

    printf("Sorted array:\n");
    container_print(container);

    container_destruct(container);

    return 1;
}