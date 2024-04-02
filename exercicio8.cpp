#include <iostream>

using namespace std;

int main (){

    int lado1, lado2, lado3;

    cout << "Digite o 1° número: ";
    cin >> lado1;
    cout << "Digite o 2° número: ";
    cin >> lado2;
    cout << "Digite o 3° número: ";
    cin >> lado3;

    if (lado1 + lado2 < lado3 || lado2 + lado3 < lado1 || lado1 + lado3 < lado2){
        cout << "Formam triângulo" << endl;
    } else {
        cout << "Não formam" << endl;
    }


    return 0;
}
