// Crie um programa que peça ao usuário para digitar sua idade e verifique se é maior ou igual a 18 anos.

#include <iostream>

using namespace std;

int main() {

    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    if(idade >= 18) {
        cout << "Você é MAIOR de 18." << endl;
    } else {
        cout << "Você é MENOR de 18." << endl;
    }
    return 0;
}