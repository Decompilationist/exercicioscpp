// Crie um programa que leia dois números e imprima a soma, subtração, multiplicação e divisão.

#include <iostream>

using namespace std;

int main() {
    int num1;
    cout << "Digite o primeiro numero: ";
    cin >> num1;

    int num2;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "A soma dos dois numeros é: " << num1 + num2 << endl;
    cout << "A subtracao dos dois numeros é: " << num1 - num2 << endl;
    cout << "A multiplicacao dos dois numeros é: " << num1 * num2 << endl;
    cout << "A divisão dos dois numeros é: " << num1 / num2 << endl;
}