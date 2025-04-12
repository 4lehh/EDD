#pragma once

class Mechon{
    private: 
        int life;
        int damage = 2;
        int enemigos_eliminados;
    public:
        Mechon(int _life);
        ~Mechon();
        int getDamage();
        int getLife();
        bool isDead();
        void aumentarContadorEnemigos();
        void recibeDamage(int _damage);
};
