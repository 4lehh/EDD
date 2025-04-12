#pragma once

class Enemigo{
    private:
        int life;
        int damage; 
        bool CANO;

        // Si es CANO
        int golpes_recibidos;
        static const int golpes_para_dividirse = 2;

    public:
        Enemigo(int,int,bool);
        ~Enemigo();
        int getDamage();
        int getLife();
        int recibeDamage(int _danio_inflingido);
        bool isDead();
        bool seSubdivide();
};
