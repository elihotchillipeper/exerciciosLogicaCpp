#include <iostream>

using namespace std;

int main (){

    int horas;

    cout << "Digite a hora: ";
    cin >> horas;

    int segundos = horas * 3600;

    cout << "Em segundos são: " << segundos << endl;


    return 0;
}