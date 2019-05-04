//
// Created by osama on 26/04/19.
//
#include <iostream>
#include "algorithms.h"
using namespace std;


int merge_sort(int *vetor, int comeco, int fim)
{
    int compares = 0;
    if (comeco < fim) {
        int meio = (fim+comeco)/2;
        compares += merge_sort(vetor, comeco, meio);
        compares += merge_sort(vetor, meio + 1, fim);
        compares += merge(vetor, comeco, meio, fim);
    }
    return compares;
}

int merge(int *vetor, int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));
    int comparisons = 0;
    while(com1 <= meio && com2 <= fim)
    {
        if(vetor[com1] < vetor[com2])
        {
            vetAux[comAux] = vetor[com1];
            com1++;
            comparisons++;
        }
        else{
            vetAux[comAux] = vetor[com2];
            com2++;
            comparisons++;
        }
        comAux++;
    }
    while(com1 <= meio)
    {  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }
    while(com2 <= fim)
    {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }
    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }
    free(vetAux);
    return comparisons;
}

