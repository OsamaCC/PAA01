#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>
#include "check_it.h"
#include "algorithms.h"

using namespace std;


int main()
{
    int i;
    int NUM_OF_VALUES;
    int count = 0;
    int *vector_bubble;
    int *vector_insertion;
    int *vector_selection;
    int *vector_merge;
    ifstream archive;
    for(i = 1; i <= 5; i++)
    {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Initializing iteration: " << i << endl;
        NUM_OF_VALUES = check_iterator(i);
        vector_bubble = (int*) malloc(NUM_OF_VALUES * sizeof(int));
        vector_insertion = (int*) malloc(NUM_OF_VALUES * sizeof(int));
        vector_selection = (int*) malloc(NUM_OF_VALUES * sizeof(int));
        vector_merge = (int*) malloc(NUM_OF_VALUES * sizeof(int));
        string Result = static_cast<ostringstream*>( &(ostringstream() << i) )->str();
        archive.open("/home/osama/CLionProjects/trabalho01/random/"+Result+".txt", ifstream::in);

        if(!archive)
        {
            cout << "Fail opening file number "<< i << "." << endl;
            exit(0);
        }
        count = 0;
        while(!archive.eof())
        {
            archive >> vector_bubble[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while(!archive.eof())
        {
            archive >> vector_insertion[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while(!archive.eof())
        {
            archive >> vector_selection[count];
            count++;
        }
        archive.clear();
        archive.seekg(0, ios::beg);
        count = 0;
        while(!archive.eof())
        {
            archive >> vector_merge[count];
            count++;
        }
        archive.clear();
        archive.close();
        //PRINT ARRAY
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Original array." << endl;

//        for(count = 0; count < NUM_OF_VALUES; count++){
//            cout <<"element["<< count +1 <<"] = " << vector_bubble[count] << endl;
//        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Starting ordenations methods!" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        bubble_sort(vector_bubble, NUM_OF_VALUES);
        insertion_sort(vector_insertion, NUM_OF_VALUES);
        selection_sort(vector_selection, NUM_OF_VALUES);
        merge_sort(vector_merge, 0, NUM_OF_VALUES-1);

        free(vector_bubble);
        free(vector_insertion);
        free(vector_selection);
        free(vector_merge);


        cout << "End of file " << i <<"." << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    }

    return 0;

}

//    clock_t t;
//    double time_taken = 0.0;
//    srand((unsigned)time(NULL));
//    t = clock();
//    //bubble_sort();
//    readDATA();
//    t = clock() -t;
//    time_taken = ((double) t)/CLOCKS_PER_SEC; //in seconds
//    printf("bubble_sort time: %f", time_taken);