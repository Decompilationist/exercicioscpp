// Crie um programa que peça ao usuário para digitar um texto e imprima o texto em maiúsculas e minúsculas.

#include <iostream>
#include <string>
#include <locale>


using namespace std;

int main() {

    cout << "Digite um texto: ";
    string texto;
    getline(cin, texto);

    cout << "Texto em maiusculas: ";
    for(char& c : texto) {
        cout << toupper(c, locale());
    }
    cout << endl;

    cout << "Texto em minusculas: ";
    for (char& c : texto) {
        cout << tolower(c, locale());
    }
    cout << endl;

    return 0;
   
}