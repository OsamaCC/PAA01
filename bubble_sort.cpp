//
// Created by osama on 26/04/19.
//

#include <iostream>
#include <fstream>
#include "algorithms.h"
using namespace std;
void bubble_sort (int vetor[], int n)
{
    int i, j, aux;
    int swap = 0;
    int comp = 0;
    cout << "Initializing bubble sort." << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++)
        {
            comp++;
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                swap++;
            }
        }
    }
//    for (i = 0; i < n; i++) {
//        cout << "element[" << i + 1 << "] = " << vetor[i] << endl;
//    }
    cout << "Number of comparations: " << comp << endl;
    cout << "Number of swaps: " << swap << endl;
    cout << "End of bubble sort." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
}
