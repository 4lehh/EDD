#pragma once
#include <iostream>

class ArrayQueue{
    private:
        int* array;
        int head;
        int tail;
        int capacity;
        int size;
        
    public:
        ArrayQueue(int);
        ~ArrayQueue();
        void enqueue(int);          // VOID SOLO AGREGA
        int dequeue();
        bool isFull();
        int front();
        bool isEmpty();
        void viewArray(){
            for(int i = 0; i < this->capacity; i++){
                std::cout << this->array[i] << " ";
            }
            std:: cout << " " << std::endl;
        }
};
