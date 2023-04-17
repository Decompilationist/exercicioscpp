// Crie um programa que peça ao usuário para digitar um número e imprima se é positivo ou negativo.

#include <iostream>

using namespace std;

int main() {

    int num;
    cout << "Digite um número: ";
    cin >> num;

    if(num>= 0) {
        cout << "O número é positivo." << endl;
    } else {
        cout << "O número é negativo." << endl;
    }
    return 0;

}