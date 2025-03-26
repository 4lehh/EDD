#include <bits/stdc++.h>            // Importa toda las librerias

int main(){
    std::vector<int> vector;
    for (int i = 0; i < 1000 ; i++)
        vector.insert(vector.end(), i + 1);

    int number = (rand() % 1000) + 1;
    int number_2 = 0; 
    int your_number;

    for(int i = 0; i < 10; i++){
        std::cout << "Ingresa un numero: ";
        std::cin>>your_number;

        if(your_number > number){
            std::cout << "El numero es menor" << std::endl;
        } else if (your_number < number) {
            std::cout << "El numero es mayor" << std::endl;
        } else{
            std::cout << "You win" << std::endl;
            return 0;
        }
    }
    std::cout << "You lose nigger" << std::endl;
    return 0;
}

