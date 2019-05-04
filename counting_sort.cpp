//
// Created by osama on 27/04/19.
//
#include <iostream>
#include "algorithms.h"
using namespace std;

void counting_sort(int *A, int k, int n)
{
    int i, j;
    int comp = 0;
    int B[k], C[k];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++) //counts the number of occurences of each number
        C[A[j]] = C[A[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
        if(B[j] != 0) comp++;
    }
//    printf("The Sorted array is :\n");
//    for (i = 1; i <= n; i++)
//        printf("%d \n", B[i]);
    cout << "counting sort comparisons = " << comp << endl;

}