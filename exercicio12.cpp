#include <iostream>

using namespace std;

int main (){

    int numero;

    cout << "Digite um número: ";
    cin >> numero ;

    if (numero % 3 == 0 && numero % 5 == 0) {
        cout << numero << "\n1" << endl;
    } else {
        cout << numero << "\n0" << endl;
    }

    

    return 0;
}