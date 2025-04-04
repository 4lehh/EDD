#include "../include/deque.h"
#include "../include/node.h"
#include "node.cpp"
#include <iostream>
#include <string>

template <typename T> Deque<T>::Deque(){
    this->next = nullptr;
    this->back = nullptr;
    this->capacity = 0;
}

template <typename T> Deque<T>::~Deque(){
    std::cout << "Eliminado" << std::endl;
}

template <typename T> void Deque<T>::pushFront(T _value){
    if(this->isEmpty()) {
        Node<T> *nuevo_nodo = new Node<T>(_value);
        this->next =  nuevo_nodo;
        this->back = nuevo_nodo;
    }       
    else {
        Node<T> *aux = new Node<T>(_value);
        aux->back = this->next;
        this->next->next = aux;
        this->next = aux;
    }
    this->capacity++;
}

template <typename T> void Deque<T>::pushBack(T _value){
    if(this->isEmpty()) {
        Node<T> *nuevo_nodo = new Node<T>(_value);
        this->next =  nuevo_nodo;
        this->back = nuevo_nodo;
    }       
    else {
        Node<T> *aux = new Node<T>(_value);
        aux->next = this->back;
        this->back->back = aux;
        this->back = aux;
    }
    this->capacity++;
}

template <typename T> T Deque<T>::getBack(){
    return this->back->value;
}

template <typename T> T Deque<T>::getFront(){
    return this->next->value;
}

template <typename T> void Deque<T>::popFront(){
    if(this->isEmpty()){
        std::cout << "No hay nodos al frente" << std::endl;
    } else{
        Node<T> *nodo_eliminar = this->next;
        this->next = this->next->back;
        std::cout << "Valor: " << nodo_eliminar->value << std::endl;
        delete nodo_eliminar;
        this->capacity--;
    }
    return;
}

template <typename T> void Deque<T>::popBack(){
    if(this->isEmpty()){
        std::cout << "No hay nodo atras" << std::endl;
    } else{
        Node<T> *nodo_eliminar = this->back;
        this->back = this->back->next;
        std::cout << "Valor: " << nodo_eliminar->value << std::endl;
        delete nodo_eliminar;
        this->capacity--;
    } 
    return;
}

template <typename T> bool Deque<T>::isEmpty(){
    return this->capacity == 0;
}

int main(){
    Deque<std::string> *deque = new Deque<std::string>();
    deque->pushBack("adios");
    deque->pushFront("nigga");
    deque->popBack();
    deque->popFront();
    delete deque;
}
