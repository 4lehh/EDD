#include <iostream>
#include <string>

/*
class EstructuraADT{
    public:
        virtual void agregar(int) = 0;
        virtual void remover() = 0;
        virtual bool isEmpty() = 0;
        virtual int tamaño() = 0;
        virtual int cima() = 0;
        virtual void vaciar() = 0;
        virtual ~EstructuraADT() {};
};
*/

class Stack(){
    private:
        std::string llaves;
    public:
        Stack();
        void push(std::string);
        void pop();
        std::string top();
        bool isEmpty();
};


Stack::Stack(){
    this->llaves = "";
}

Stack::push(std::string _string){

}



int main(){
    
}
