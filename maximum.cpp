//
// Created by osama on 27/04/19.
//
#include <iostream>
using namespace std;

int maximum(int *vetor, int size)
{
    int curr = 0;
    int max = 0;
    for(curr = 0; curr < size; curr++){
        if(vetor[curr] > max)
        {
            max = vetor[curr];
        }
    }
    return max;
}
