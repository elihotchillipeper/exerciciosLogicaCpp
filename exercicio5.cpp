#include <iostream>

using namespace std;

int main (){

    int celcius;

    cout << "Digite a temperatura (em °C): ";
    cin >> celcius;

    //double exerce a mesma função do float (se não me engano :/)
    double fahrenheit = (celcius * 9/5)+ 32;

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl; 

    return 0;
}