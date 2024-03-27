#include <iostream>

using namespace std;

int main (){

    int a;

    cout << "Digite um número: ";
    cin >> a ;

    if (a % 2 == 0) {
        cout << a << "\npar" << endl;
    
    } else {
        cout << a << "\nimpar" << endl;
    }

    

    return 0;
}
