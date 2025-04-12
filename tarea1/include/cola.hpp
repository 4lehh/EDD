#pragma once 
#include <enemigo.hpp>
#include <nodo.hpp>

class Cola{
    private:
        Nodo *head;
        Nodo *tail;
    public:
        Cola();
        ~Cola();
        void push(Enemigo*);
        Enemigo* pop();
        Enemigo* frontEnemigo();
        void seSubdivide();
        bool isEmpty();

};
