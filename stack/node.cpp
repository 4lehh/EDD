#include "node.h"
#include <iostream>


Node::Node(int _value){
    this->value = _value;
    this->next = nullptr;
}

Node::~Node(){
    std::cout << "Nodo destruido" << std::endl;
}
