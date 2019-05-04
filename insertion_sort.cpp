//
// Created by osama on 26/04/19.
//
#include <iostream>
#include <fstream>
#include "algorithms.h"
using namespace std;
void insertion_sort(int *vetor, int n)
{
    int i, temp, j;
    int swap = 0;
    int comp = 0;
    for (i = 1; i < n; i++)
    {
        j = i;
        comp++;
        while (j > 0 && vetor[j-1] > vetor[j])
        {
            swap++;
            temp = vetor[j];
            vetor[j] = vetor[j - 1];
            vetor[j - 1] = temp;
        }
    }
//    for(i = 0; i < n; i++){
//        cout <<"element["<< i + 1 <<"] = " << vetor[i] << endl;
//    }
    cout << "Number of comparations: " << comp << endl;
    cout << "Number of swaps: " << swap << endl;
}