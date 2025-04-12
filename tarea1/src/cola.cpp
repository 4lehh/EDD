#include "../include/cola.hpp"
#include "../include/nodo.hpp"
#include "../include/enemigo.hpp"
#include <iostream> 

Cola::Cola(){
    this->head = nullptr;
    this->tail = nullptr;
}

Cola::~Cola(){}

void Cola::push(Enemigo *_enemigo){
    Nodo *nuevo_nodo = new Nodo(_enemigo);
    
    if(this->isEmpty()){
        this->tail = nuevo_nodo;
        this->head = nuevo_nodo;
        return;
    }

    this->tail->next = nuevo_nodo;
    this->tail = nuevo_nodo;
}

bool Cola::isEmpty(){
    return this->head == nullptr;
}

Enemigo* Cola::frontEnemigo(){
    return this->head->enemigo;
}

Enemigo* Cola::pop(){
    if(this->isEmpty()) throw std::runtime_error("No hay enemigos\n");

    Nodo *nodo_eliminar = this->head;
    Enemigo *enemigo_head = this->head->enemigo;
    this->head = this->head->next;
    delete nodo_eliminar;
    return enemigo_head;
}

void Cola::seSubdivide(){
    if(this->isEmpty()) throw std::runtime_error("No hay enemigos\n");
    
    if(this->head->enemigo->getLife() - 1 == 0 || this->head->enemigo->getDamage() - 1 == 0) throw std::runtime_error("No puede subdividirse\n");

    Enemigo *enemigo1, *enemigo2;
    enemigo1 = new Enemigo(this->head->enemigo->getLife() - 1, this->head->enemigo->getDamage() - 1, false);
    enemigo2 = new Enemigo(this->head->enemigo->getLife() - 1, this->head->enemigo->getDamage() - 1, false);

    Nodo *nodo1, *nodo2;
    nodo1 = new Nodo(enemigo1);
    nodo2 = new Nodo(enemigo2);

    nodo1->next = nodo2;
    nodo2->next = this->head->next;
    delete this->head;
    this->head = nodo1;
}
