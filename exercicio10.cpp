#include <iostream>

using namespace std;

int main (){

    int nota1, nota2, nota3, peso1, peso2, peso3;

    //Notas e pesos
    cout << "Digite a 1° nota: ";
    cin >> nota1;
    cout << "Digite o 1° peso: ";
    cin >> peso1;

    cout << "Digite a 2° nota: ";
    cin >> nota2;
    cout << "Digite o 2° peso: ";
    cin >> peso2;

    cout << "Digite a 3° nota: ";
    cin >> nota3;
    cout << "Digite o 3° peso: ";
    cin >> peso3;

    
    //Média cada nota
    int media = (nota1 * peso1) / nota1 + (nota2 * peso2) / nota2 + (nota3 * peso3) / nota3;

    cout << "A média de total é: " << media << endl;




    return 0;
}