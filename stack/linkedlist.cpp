#include <iostream>
#include "linkedlist.h"

LinkedList::LinkedList(){
    this->top = nullptr;
    this->capacity = 0;
}

void LinkedList::push(int _value){
    if(this->top == nullptr){
        this->top = new Node(_value);
    } else {
        Node *aux = new Node(_value);
        aux->next = this->top;
        this->top = aux;
    }
    this->capacity++;
}

int LinkedList::pop(){
    if(this->capacity != 0 && this->top != nullptr){
        int value = this->top->value;
        Node *node_delete = this->top;
        this->top = this->top->next;
        delete node_delete;
        this->capacity--;
        return value;
    } else {
        std::cerr << "No hay nodos" << std::endl;
        return -1;
    }
}

int LinkedList::getCapacity(){
    return this->capacity;
}

int main(){
    LinkedList linked;
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
