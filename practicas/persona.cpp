#include "persona.h"
#include <iostream>

Persona::Persona(int _edad, std::string _name, bool _estado_civil){
    edad = _edad;
    nombre = _name;
    estado_civil = _estado_civil;
}

std::string Persona::getName(){
    return nombre;
}

int Persona::getAge(){
    return edad;
}

bool Persona::getEstadoCivil(){
    return estado_civil;
}

int main(){
    Persona p1(20, "javier campos", false);
    int edad = p1.getAge();
    std::string nombre = p1.getName();
    bool estado = p1.getEstadoCivil();
    

    std::cout << "Mi nombre es " << nombre << " y tengo " << edad << " y, ¿estoy soltero? " << estado << std::endl;
}
