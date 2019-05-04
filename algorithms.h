//
// Created by osama on 26/04/19.
//

#ifndef TRABALHO01_ALGORITHMS_H
#define TRABALHO01_ALGORITHMS_H

void bubble_sort(int *vetor, int n);
void insertion_sort(int *vetor, int n);
void selection_sort(int *vetor, int n);
int merge_sort(int *vetor, int comeco, int fim);
int merge(int *vetor, int comeco, int meio, int fim);
void quick_sort(int *vetor, int began, int end);
//void counting_sort(int vetor[], int max, int size);
void counting_sort_mm(int *array, int n, int min, int max);
int maximum (int *vetor, int size);
void bucket_sort(int *vetor, int n);


#endif //TRABALHO01_ALGORITHMS_H
