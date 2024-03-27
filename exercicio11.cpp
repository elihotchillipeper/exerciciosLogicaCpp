#include <iostream>

using namespace std;

int main (){

    int b, h;

    cout << "Digite a base do triângulo: ";
    cin >> b;
    cout << "Digite a altura do triângulo: ";
    cin >> h;

    int area = (b * h)/2;

    cout << "A área do triângulo é: " << area << endl;



    return 0;
}