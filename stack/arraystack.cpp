#include "arraystack.h"
#include <iostream>

ArrayStack::ArrayStack(int _capacity){
    this->capacity = _capacity;
    this->size = 0;
    this->array = new int[capacity];
}

bool ArrayStack::isEmpty(){
    return this->size == 0;
}

bool ArrayStack::isFull(){
    return this->size == this->capacity;
}

void ArrayStack::push(int value){
    if (!this->isFull()){
        this->array[this->size++] = value;
    } else std::cerr << "Pila está llena" << std::endl;
}

int ArrayStack::pop(){
    if(!this->isEmpty()){
        return this->array[--size];
    } else std::cerr << "Pila vacía" << std::endl;
    return 0;
}

ArrayStack::~ArrayStack(){
    std::cout << "Fin programa" << std::endl;
    delete[] this->array;
}


int main(){
    ArrayStack stack(3);

    stack.push(3);
    stack.push(-5);
    stack.push(10);

    // stack: 3 -5 10
    
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;

    // Esperado 
    // 10
    // -5
    // 3
    
    return 0;
}
