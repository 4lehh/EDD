#pragma once 
#include <enemigo.hpp>

class Nodo{
    public:
        Nodo(Enemigo*);
        ~Nodo();
        Enemigo *enemigo;
        Nodo *next;
};
