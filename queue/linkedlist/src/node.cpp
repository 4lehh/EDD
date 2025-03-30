#include "../include/node.h"
#include <iostream>
#include <string>

template <typename T> Node<T>::Node(T _value){
    this->value = _value;
    this->next = nullptr;
}

template <typename T> Node<T>::~Node(){
    std::cout << "Nodo eliminado" << std::endl;
}

/* int main(){
    Node<std::string> *node1 = new Node<std::string>("hola");
    Node<std::string> *node2 = new Node<std::string>("nenenee");
    node1->next = node2;
    std::cout << node1->value << std::endl;
    std::cout << node1->next->value << std::endl;
    delete node1;
    delete node2;
} */
