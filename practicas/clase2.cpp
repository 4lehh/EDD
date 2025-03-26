#include <bits/stdc++.h>

class Negros{
    private: 
        std::string hablar;
        int edad;
    public:
        Negros(int _edad, std::string _hablar);
        void hablarBro();
        void printEdad();
};


Negros::Negros(int _edad, std::string _hablar){
    hablar = _hablar;
    edad = _edad;
}

void Negros::hablarBro(){
    std::cout << hablar << std::endl;
}

void Negros::printEdad(){
    std::cout << "Tengo " << edad << " de edad nigga" << std::endl;
}

int main(){
    std::cout << "Hola amor" << std::endl;

    Negros negro(10, "Pedro");
    negro.hablarBro();
    negro.printEdad();
    return 0;
}
