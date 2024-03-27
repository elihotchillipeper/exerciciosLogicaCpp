#include <iostream>

using namespace std;

int main (){

    int a;

    cout << "Digite um número: ";
    cin >> a ;

    if (a > 0 && a % 2 == 0 ) {
        cout << a << "\n1" << endl;
    } else {
        cout << a << "\n0" << endl;
    }

    

    return 0;
}