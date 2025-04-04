#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../include/bogoSort.h"
#include <chrono>

BogoSort::BogoSort(int* _array, int _length){
    this->array = _array;
    this->length = _length;
    this->attems = 0;
}

void BogoSort::showSort(){
    std::cout << "[ ";
    for(int i = 0; i < this->length; i++) std::cout << this->array[i] << " ";
    std::cout << "]" << std::endl;
    std::cout << "Intentos: " << this->attems << std::endl;
}

void BogoSort::swap(){
    srand(time(0));

    int *elements = new int[this->length]{0}; 
    int *nuevo_array = new int[this->length];
    
    for(int i = 0; i < this->length; i++) {
        elements[i] = 0;
        nuevo_array[i] = 0;
    }

    for(int i = 0; i < this->length; i++){
        int index = rand() % this->length;
        while(elements[index] == 1){
            index = rand() % this->length;
        }
        nuevo_array[index] = this->array[i];
        elements[index] = 1;
    }
    
    for(int i = 0; i < this->length; i++) this->array[i] = nuevo_array[i];
    delete[] elements;
    delete[] nuevo_array;
}

bool BogoSort::verify(){
    for(int i = 0; i < this->length; i++){
        for(int j = i + 1; j < this->length; j++)
            if(this->array[i] > this->array[j]) return false; 
    }
    return true;
}

void BogoSort::sort(){
    while(!this->verify()){
        this->swap();
        this->attems++;
        this->showSort();
    }
}

int main(){
    int arr[] = {6, 1, 5, 2, 4, 3};
    auto start = std::chrono::high_resolution_clock::now();
    
    BogoSort sorting(arr, 6);
    sorting.showSort();
    sorting.sort();
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Tiempo transcurrido: " << elapsed.count() << " segundos" << std::endl;
    sorting.showSort();

}
