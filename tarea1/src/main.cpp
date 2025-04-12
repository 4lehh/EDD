#include <iostream>
#include "../include/mechon.hpp"
#include "../include/nodo.hpp"
#include "../include/cola.hpp"
#include "../include/enemigo.hpp"

#define rep(i,n) for(int i=0; i<(int)n;i++)

int main(){
    int vida_mechon, num_enemigos;

    std::cin >> vida_mechon >> num_enemigos;
    int vida_enemigos[num_enemigos];
    int daño_enemigos[num_enemigos];
    int cano_enemigos[num_enemigos];
    
    rep(i,num_enemigos) std::cin >> vida_enemigos[i];
    rep(i,num_enemigos) std::cin >> daño_enemigos[i];
    rep(i,num_enemigos) std::cin >> cano_enemigos[i];
    
    Cola *cola = new Cola();

    rep(i,num_enemigos) {
        Enemigo *new_enemigo = new Enemigo(vida_enemigos[i], daño_enemigos[i], cano_enemigos[i]);
        cola->push(new_enemigo);
    }

    Mechon *mechon = new Mechon(vida_mechon);
    int daño_acumulado = 0;
    int ciclos_batalla = 0;

    while(!mechon->isDead() && !cola->isEmpty()){
        std::cout << ++ciclos_batalla << std::endl;

        Enemigo *enemigo = cola->frontEnemigo();

        // Primer recibe daño el enemigo

        int daño_recibido = enemigo->recibeDamage(mechon->getDamage());
        std::cout << "Damage mechon: " << daño_recibido << std::endl;
        daño_acumulado += daño_recibido;

        // Ahora recibe daño el mechon

        mechon->recibeDamage(enemigo->getDamage());
        std::cout << "Damage enemigo: " << enemigo->getDamage() << std::endl;

        if(enemigo->isDead()){
            std::cout << "Haz matado un enemigo\n";
            mechon->aumentarContadorEnemigos();
            cola->pop();
            continue;
        }

        if(enemigo->seSubdivide()){
            std::cout << "Enemigo se subdivide\n";
            cola->seSubdivide();
            enemigo = cola->frontEnemigo();
        }
    }

    std::cout << "Daño acumulado: " << daño_acumulado << std::endl;
    if(mechon->isDead()) std::cout << "RIP mechon\n";
    else std::cout << "EZ pizi\n";

    delete cola;
    delete mechon;
}
