#include "../include/linkedlist.h"
#include "../include/node.h"
#include "node.cpp"
#include <iostream>
#include <string>
#include <optional>

template <typename T> LinkedListQueue<T>::LinkedListQueue(T _value){
    this->head = new Node<T>(_value);
    this->tail = this->head;
    this->capacity = 1;
}

template <typename T> LinkedListQueue<T>::~LinkedListQueue(){
    std::cout << "LinkedList Delete" << std::endl;
}

template <typename T> int LinkedListQueue<T>::getCapacity(){
    return this->capacity;
}

template <typename T> T LinkedListQueue<T>::front(){
    T value = this->head->value;
    return value;
}

template <typename T> void LinkedListQueue<T>::enqueue(T _value){
    this->tail->next = new Node<T>(_value);
    this->tail = this->tail->next;
    this->capacity++;
}

template <typename T> std::optional<T> LinkedListQueue<T>::dequeue(){
    if(this->capacity == 0){
        std::cerr << "LinkedList is Empty" << std::endl;
        return std::nullopt;
    }
    T val = this->head->value;
    Node<T> *aux = this->head;
    this->head = this->head->next;
    delete aux;
    this->capacity--;
    return val;
}


int main(){
    LinkedListQueue<std::string> *linked = new LinkedListQueue<std::string>("hola");
    linked->enqueue("adios");
    linked->enqueue("buenas");
    linked->enqueue("nolose");
    
    auto result = linked->dequeue();
    std::cout << *result << std::endl;
    result = linked->dequeue();
    std::cout << *result << std::endl;
    result = linked->dequeue();
    std::cout << *result << std::endl;
    result = linked->dequeue();
    std::cout << *result << std::endl;
    result = linked->dequeue();
    std::cout << *result << std::endl;
    delete linked;
    return 0;
}
