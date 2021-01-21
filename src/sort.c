#include <stdlib.h>
#include <stdio.h>

#include "sort.h"

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
 * Bubblesort 
 */

void bubblesort(Container* c) {
    for (int i = 0; i < c->size; i++) {
        for (int ii = 0; ii < c->size - i; ii++) {
            if (c->data[ii] > c->data[ii + 1]) {
                swap(&c->data[ii], &c->data[ii + 1]);
            }
        }
    }
}

/*
 * Quicksort 
 */

int partition (Container* c, int left, int right) {
    int pivot = c->data[right]; // Pivot
    int i = left - 1; // Index of smaller element
  
    for (int j = left; j <= right - 1; j++) {
        // If current element is smaller than the pivot
        if (c->data[j] < pivot) {
            i++; // Increment index of smaller element
            swap(&c->data[i], &c->data[j]);
        }
    }

    swap(&c->data[i + 1], &c->data[right]);
    return (i + 1);
}

void quicksort(Container* c, int left, int right) {
    if (left < right) {
        int index = partition(c, left, right);

        quicksort(c, left, index - 1);
        quicksort(c, index + 1, right);
    }
}