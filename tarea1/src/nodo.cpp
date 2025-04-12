#include "../include/nodo.hpp"
#include "../include/enemigo.hpp"

Nodo::Nodo(Enemigo *_enemigo){
    this->next = nullptr;
    this->enemigo = _enemigo;
}

Nodo::~Nodo(){}
