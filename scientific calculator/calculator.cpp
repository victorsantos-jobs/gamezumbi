#include<iostream>

float a;
float b;
float c;
float somaa;

void soma(){



    std::cout << "Digite o primeiro numero que ira somar!";
    std::cin >> a;
    std::cout << "Digite o segundo numero que ira somar!";
    std::cin >> b;
    somaa = a + b;
    std::cout << "O resultado da sua soma:" << somaa ;


     
}

int main(){

std::cout << "\nQual o peracao matematica deseja realizar?\n\n";
std::cout << "Digite 'soma' para  somar dois numeros:\n";
std::cout << "Digite 'qarea' para  calcular a area de um quadrado :\n";

soma();

    return 0;
}

