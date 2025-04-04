#pragma once

class BogoSort{
    private: 
        int* array;
        int length;
        long long attems;
    public:
        BogoSort(int*,int);
        bool verify();
        void sort();
        void showSort();
        void swap();
};
