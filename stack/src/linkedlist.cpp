#include <iostream>
#include "../includes/linkedlist.h"

template <typename T> LinkedList<T>::LinkedList(){
    this->top = nullptr;
    this->capacity = 0;
}

template <typename T> void LinkedList<T>::push(T _value){
    if(this->top == nullptr){
        this->top = new Node<T>(_value);
    } else {
        Node<T> *aux = new Node<T>(_value);
        aux->next = this->top;
        this->top = aux;
    }
    this->capacity++;
}

template <typename T> T LinkedList<T>::pop(){
    if(this->capacity != 0 && this->top != nullptr){
        T value = this->top->value;
        Node<T> *node_delete = this->top;
        this->top = this->top->next;
        delete node_delete;
        this->capacity--;
        return value;
    } else {
        std::cerr << "No hay nodos" << std::endl;
        return -1;
    }
}

template <typename T> int LinkedList<T>::getCapacity(){
    return this->capacity;
}

int main(){
    LinkedList<int> linked;
    linked.push(10);
    std::cout << "Capacidad: " << linked.getCapacity() << std::endl;
    linked.push(3);
    std::cout << "Capacidad: " << linked.getCapacity() << std::endl; 
    linked.push(-1);
    std::cout << "Capacidad: " << linked.getCapacity() << std::endl;
    std::cout << linked.pop() << std::endl;
    std::cout << "Capacidad: " << linked.getCapacity() << std::endl;
    std::cout << linked.pop() << std::endl;
    std::cout << "Capacidad: " << linked.getCapacity() << std::endl;
    std::cout << linked.pop() << std::endl;
    
    // Resultado: 
    // Capacidad: 3
    // Nodo destruido
    // -1
    // Capacidad: 2
    // Nodo destruido
    // 3
    // Capacidad: 1
    // Nodo destruido
    // 10


}
