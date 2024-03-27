#include <iostream>

using namespace std;

int main(){

    int ano;

    cout << "Digite o ano: ";
    cin >> ano ;

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        cout << ano << "\nBissexto" << endl;
    } else {
        cout << ano << "\nNâo é Bissexto" << endl;
    }




    return 0;
}