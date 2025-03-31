#include "../include/selectionSort.h"
#include <iostream>
#define MAX_VALUE 1024


SelectionSort::SelectionSort(int* _array, int _lenght){
    this->array = _array;
    this->lenght = _lenght;
    this->index = 0;
}

void SelectionSort::showSort(){
    for(int i = 0; i < this->lenght; i++){
        std::cout << this->array[i] << " "; 
    }
    std::cout << "" << std::endl;
}

void SelectionSort::swap(int _index1, int _index2){
    int aux = this->array[_index2];
    this->array[_index2] = this->array[_index1];
    this->array[_index1] = aux;
}

void SelectionSort::sort(){
    for(int i = 0; i < this->lenght; i++){
        int minor = MAX_VALUE; 
        for(int j = i+1; j < this->lenght; j++){
            if(minor > this->array[j]) {
                this->index = j;
                minor = this->array[j];
            }
        }
        if(this->array[i] > minor){
            this->swap(this->index, i);
        }
    }
}

int main(){
    int arr[] = {10, 7, 8, 5, 3, 4, 9, 1, 2, 6};
    SelectionSort sorting(arr, 10);
    sorting.sort();
    sorting.showSort();
}
