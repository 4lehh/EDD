#include "arrayqueue.h"
#include <iostream>

ArrayQueue::ArrayQueue(int _capacity){
    this->array = new int[_capacity];
    this->capacity = _capacity;
    this->tail = 0;
    this->head = 0;
    this->size = 0;
}

void ArrayQueue::enqueue(int _value){
    // Arreglo circular
    if(this->isFull()){
        std::cerr << "Cola llena" << std::endl;
        return;
    }
    if (this->array[this->head] == this->array[this->tail] && this->size != 0) this->tail = (this->tail + 1) % this->capacity;     // Manejo en que ambos choquen y sobreescriba
    this->array[this->tail] = _value;               // Asiganmos la cola, pero debemos avanzar tail al siguiente%capacity
    this->tail++;
    this->tail %= this->capacity;
    this->size++;

}

int ArrayQueue::dequeue(){
    if(this->isEmpty()){
        std::cerr << "Cola vacía" << std::endl;
    }
    int aux = this->array[this->head];
    this->array[this->head++] = 0;
    this->head %= this->capacity;
    this->size--;
    
    return aux;

}

int ArrayQueue::front(){
    return this->array[this->head];
}

bool ArrayQueue::isFull(){
    return this->capacity == this->size;
}

bool ArrayQueue::isEmpty(){
    return this->size == 0;
}

ArrayQueue::~ArrayQueue(){
    delete this->array;
    std::cout << "Queue eliminada" << std::endl;
}

int main(){
    ArrayQueue arr(4);
    arr.enqueue(1);
    arr.enqueue(3);
    arr.enqueue(10);
    arr.enqueue(-1);
    arr.dequeue();
    arr.dequeue();                                
    arr.dequeue();                                  
    arr.dequeue();
    arr.enqueue(-1);
    arr.dequeue();
    return 0;
}
