#include <iostream>

using namespace std;

int main (){

    int a, b;

    cout << "Digite o 1° número: ";
    cin >> a;
    cout << "Digite o 2° número: ";
    cin >> b;

    if (a > b){
        cout << "O número A é maior que B." ;
    } else if(a < b) {
        cout << "O número A é menor que B." ;
    } else{
        cout << "O número A é igual a B.";
    }


    return 0;
}