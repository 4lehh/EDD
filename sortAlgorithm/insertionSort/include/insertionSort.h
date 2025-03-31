#pragma once

class InsertionSort{
    private: 
        int* array;
        int length;
    public:
        InsertionSort(int*,int);
        void sort();
        void showSort();
        void swap(int,int);
};
