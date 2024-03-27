#include <iostream>

using namespace std;

int main (){

    float num1, num2, num3;

    printf("Digite o 1° número: ");
    scanf("%f", &num1);
    printf("Digite o 2° número: ");
    scanf("%f", &num2);
    printf("Digite o 3° número: ");
    scanf("%f", &num3);

    printf("A média dos número é: %.2f\n",(num1 + num2 + num3) / 3);
    
    
    
    /*int num1, num2, num3;

    cout << "Digite o 1° número: ";
    cin >> num1;
    cout << "Digite o 2° número: ";
    cin >> num2;
    cout << "Digite o 3° número: ";
    cin >> num3;

    int soma = num1 + num2 +num3;

    int divisao = soma / 3;

    cout << "A média dos número é: " << divisao << endl;*/




    return 0;
}