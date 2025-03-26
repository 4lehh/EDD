#include "../includes/node.h"
#include <iostream>


template <typename T> Node<T>::Node(T _value){
    this->value = _value;
    this->next = nullptr;
}

template <typename T> Node<T>::~Node(){
    std::cout << "Nodo destruido" << std::endl;
}
