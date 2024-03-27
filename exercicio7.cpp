#include <iostream>

using namespace std;

int main (){

    int a;

    cout << "Digite um número: ";
    cin >> a ;

    if (a > 0 ) {
        cout << a << "\npositivo" << endl;
    } else {
        cout << a << "\nnegativo" << endl;
    }

    

    return 0;
}