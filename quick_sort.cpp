//
// Created by osama on 27/04/19.
//
#include <iostream>
using namespace std;

void quick_sort(int *values, int began, int end)
{
    int i, j, pivo, aux, swap = 0, comp = 0;
    i = began;
    j = end-1;
    pivo = values[(began + end) / 2];
    while(i <= j)
    {
        while(values[i] < pivo && i < end)
        {
            i++;
        }
        while(values[j] > pivo && j > began)
        {
            j--;
        }
        if(i <= j)
        {
            aux = values[i];
            values[i] = values[j];
            values[j] = aux;
            i++;
            j--;
            swap++;
        }
        comp++;
    }
    if(j > began)
        quick_sort(values, began, j + 1);
    if(i < end)
        quick_sort(values, i, end);
//    cout << "Comp = " << comp << endl;
//    cout << "Swap = " << swap << endl;
}
