#include <string>

class Persona{
    private: 
        int edad;
        std::string nombre;
        bool estado_civil;
    public: 
        Persona(int, std::string, bool);
        std::string getName();
        int getAge();
        bool getEstadoCivil();
};


