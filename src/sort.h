#ifndef SORT_H
#define SORT_H

#include "container.h"

void swap(int* a, int* b);

void bubblesort(Container* container);

void quicksort(Container* container, int left, int right);

#endif // SORT_H