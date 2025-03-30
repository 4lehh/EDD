#include "../include/bubbleSort.h"
#include <iostream>

BubbleSort::BubbleSort(int* array, int _length){
    this->array = array;
    this->length = _length;
}

void BubbleSort::swap(int _index1, int _index2){
    int aux = this->array[_index1];
    this->array[_index1] = this->array[_index2];
    this->array[_index2] = aux;
}

void BubbleSort::showSort(){
    for(int i = 0; i < this->length; i++){
        std::cout << this->array[i] << " ";
    }
    std::cout << " " << std::endl;
}

void BubbleSort::sort(){
    int count = 0;
    for(int j = 0; j < this->length - 1; j++){
        for(int i = 0; i < this->length - 1; i++){
            if(this->array[i] > this->array[i+1]){
                swap(i, i+1);
                count++;
            }
        }
        if(!count){
            std::cout << "Array ordenado" << std::endl;
            return;
        } else count = 0;
    }
}

int main(){
    int arreglo[] = {10, 1, 7, 3, 9, 5, 2, 8, 6, 4};
    BubbleSort sorting(arreglo, 10);
    sorting.sort();
    sorting.showSort();
}
