#include "../include/enemigo.hpp"

Enemigo::Enemigo(int _life, int _damage, bool _is_cano){
    this->life = _life;
    this->damage = _damage;
    this->CANO = _is_cano;
    this->golpes_recibidos = 0;
}

Enemigo::~Enemigo(){}

int Enemigo::getDamage(){
    return this->damage;
}

int Enemigo::getLife(){
    return this->life;
}

int Enemigo::recibeDamage(int _danio_inflingido){
    this->golpes_recibidos++;
    int aux = this->life;
    this->life -= _danio_inflingido;
    if(this->isDead()) return aux;
    else return _danio_inflingido;                                          // Devuelve el daño que recibio pero si muere devuelve la vida que perdio
}

bool Enemigo::isDead(){
    return this->life <= 0;
}

bool Enemigo::seSubdivide(){
    if(!this->CANO) return false;
    return this->golpes_recibidos >= this->golpes_para_dividirse;    // Retorna si puede subdividirse
}
