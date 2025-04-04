#include "../include/node.h"
#include <iostream>

template <typename T> Node<T>::Node(T _value){
    this->next = nullptr;
    this->back = nullptr;
    this->value = _value;
}

template <typename T> Node<T>::~Node(){
    // std::cout << "Nodo eliminado" << std::endl;
}

