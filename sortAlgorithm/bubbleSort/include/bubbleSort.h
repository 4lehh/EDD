#pragma once

class BubbleSort{
    private:
        int* array;
        int length;
    public: 
        BubbleSort(int*, int);
        void sort();
        void swap(int, int);
        void showSort();

};
