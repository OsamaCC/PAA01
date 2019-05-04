#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>
#include "check_it.h"
#include "algorithms.h"
#include <time.h>

using namespace std;

int main() {
    int i;
    int NUM_OF_VALUES;
    int count = 0;
    int *vector_bubble;
    int *vector_insertion;
    int *vector_selection;
    int *vector_merge;
    int *vector_quick;
    int *vector_counting;
    int *vector_bucket;
    ifstream archive;
    for (i = 1; i <= 20; i++) {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Initializing iteration: " << i << endl;
        NUM_OF_VALUES = check_iterator(i);
        vector_bubble = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        vector_insertion = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        vector_selection = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        vector_merge = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        vector_quick = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        vector_counting = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        vector_bucket = (int *) calloc(NUM_OF_VALUES, sizeof(int));
        string Result = static_cast<ostringstream *>( &(ostringstream() << i))->str();
        archive.open("/home/osama/CLionProjects/trabalho01/decreasing/" + Result + ".txt", ifstream::in);
        if (!archive) {
            cout << "Fail opening file number " << i << "." << endl;
            exit(0);
        }
        count = 0;
        while (!archive.eof()) {
            archive >> vector_bubble[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while (!archive.eof()) {
            archive >> vector_insertion[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while (!archive.eof()) {
            archive >> vector_selection[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while (!archive.eof()) {
            archive >> vector_merge[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while (!archive.eof()) {
            archive >> vector_quick[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while (!archive.eof()) {
            archive >> vector_counting[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while (!archive.eof()) {
            archive >> vector_bucket[count];
            count++;
        }
        archive.clear();
        archive.close();

        //PRINT ARRAY
//        cout << "--------------------------------------------------------------------------------" << endl;
//        cout << "Original array." << endl;

//        for(count = 0; count < NUM_OF_VALUES; count++){
//            cout <<"element["<< count +1 <<"] = " << vector_bubble[count] << endl;
//        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Starting ALL methods!" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        clock_t t;
        double time_taken;
        //                                                                                                             BAD ALGORITHMS
        // BUBBLE SORT
        t = clock();
        bubble_sort(vector_bubble, NUM_OF_VALUES);
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by Bubble Sort is: " << time_taken << endl;
        cout << "End of bubble sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        // INSERTION SORT
        cout << "Initializing insertion sort." << endl;
        t = clock();
        insertion_sort(vector_insertion, NUM_OF_VALUES);
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by insertion sort is: " << time_taken << endl;
        cout << "End of insertion sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        // SELECTION SORT
        cout << "Initializing selection sort." << endl;
        t = clock();
        selection_sort(vector_selection, NUM_OF_VALUES);
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by selection sort is: " << time_taken << endl;
        cout << "End of selection sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        //                                                                                                              RECURSIVE ALGORITHMS
        // MERGE SORT
        cout << "Initializing merge sort." << endl;
        int merge_result = 0;
        t = clock();
        merge_result = merge_sort(vector_merge, 0, NUM_OF_VALUES - 1);
        cout << "Number of comparisons: " << merge_result << endl;
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by merge sort is: " << time_taken << endl;
        cout << "End of merge sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        // QUICK SORT
        cout << "Initializing quick sort." << endl;
        t = clock();
        quick_sort(vector_quick, 0, NUM_OF_VALUES - 1);
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by quick sort is: " << time_taken << endl;
        cout << "End of quick sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        //                                                                                                            FAST ALGORITHMS
        // COUNTING SORT
        cout << "Initializing counting sort." << endl;
        int max = 0;
        t = clock();
        max = maximum(vector_counting, NUM_OF_VALUES);
        counting_sort_mm(vector_counting, NUM_OF_VALUES, 0, max);
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by counting sort is: " << time_taken << endl;
        cout << "End of counting sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        // BUCKET SORT
        cout << "Initializing bucket sort." << endl;
        t = clock();
        bucket_sort(vector_bucket, NUM_OF_VALUES);
        t = clock() - t;
        time_taken = ((double) t) / CLOCKS_PER_SEC;
        cout << "Time taken by bucket sort is: " << time_taken << endl;
        cout << "End of bucket sort." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        free(vector_bubble);
        free(vector_insertion);
        free(vector_selection);
        free(vector_merge);
        free(vector_quick);
        free(vector_counting);
        free(vector_bucket);
        cout << "End of file " << i << "." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    }

    return 0;
}
//    srand((unsigned)time(NULL));

