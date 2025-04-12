#include "../include/mechon.hpp"

Mechon::Mechon(int _life){
    this->life = _life;
    this->enemigos_eliminados = 0;
}

Mechon::~Mechon(){}

int Mechon::getLife(){
    return this->life;
}

int Mechon::getDamage(){
    return this->damage;
}

bool Mechon::isDead(){
    return this->life <= 0;
}

void Mechon::recibeDamage(int _damage){
    this->life -= _damage;
}

void Mechon::aumentarContadorEnemigos(){
    this->enemigos_eliminados++;
    if(this->enemigos_eliminados == 5) this->enemigos_eliminados = 0, this->damage++;
}
