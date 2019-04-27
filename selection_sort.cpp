//
// Created by osama on 26/04/19.
//
#include <iostream>
#include "algorithms.h"
using namespace std;

void selection_sort(int vetor[], int n)
{
    int aux, min, i, j;
    int comp = 0;
    int swap = 0;
    cout << "Initializing selection sort." << endl;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++ )
        {
            if(vetor[j] < vetor[min])
            {
                comp++;
                min = j;
            }

        }
        if(min != i)
        {
            aux = vetor[min];
            vetor[min] = vetor[i];
            vetor[i] = aux;
            swap++;
        }
    }
//    for(i = 0; i < n; i++){
//        cout <<"element["<< i + 1 <<"] = " << vetor[i] << endl;
//    }
    cout << "Number of comparations: " << comp << endl;
    cout << "Number of swaps: " << swap << endl;
    cout << "End of insertion sort." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

}
