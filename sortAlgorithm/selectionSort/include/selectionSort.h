#pragma once

class SelectionSort{
    private:
        int* array;
        int lenght;
        int index;
    public:
        SelectionSort(int*, int);
        void sort();
        void swap(int, int);
        void showSort();
};
