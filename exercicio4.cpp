#include <iostream>

using namespace std;

int main (){

    int a;

    cout << "Digite um número: ";
    cin >> a ;

    if (a < 0) {
        cout << a << "\nnegativo" << endl;
    
    } else {
        cout << a << "\npositivo" << endl;
    }

    

    return 0;
}