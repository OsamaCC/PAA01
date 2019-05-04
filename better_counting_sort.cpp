//
// Created by osama on 27/04/19.
//
#include <iostream>
#include <cstring>
#include "algorithms.h"
using namespace std;

void counting_sort_mm(int *array, int n, int min, int max)
{
    int i, j, z;
    int comp = 0;
    int range = max - min + 1;
    int *count;
    count =(int*) calloc(range, sizeof(*array));

    for(i = 0; i < range; i++) count[i] = 0;
    for(i = 0; i < n; i++) count[ array[i] - min ]++;
    for(i = min, z = 0; i <= max; i++) {
        for(j = 0; j < count[i - min]; j++) {
            array[z++] = i;
        }
    }
    cout << "counting sort comparisons = " << comp << endl;
    free(count);
}
