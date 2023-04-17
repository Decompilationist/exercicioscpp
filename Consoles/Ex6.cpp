// Crie um programa que leia um número e verifique se é um número primo.

#include <iostream>

using namespace std;


int main() {
    int num;
    bool primo = true;

    cout << "Digite um numero: ";
    cin >> num;

    for (int i =2; i <= num / 2; i++) {
        if (num % i == 0) {
            primo = false;
            break;
        }
    }

    if(primo) {
        cout << num << " e um numero primo." << endl;
    } else {
        cout << num << " nao e um numero primo" << endl;
    }

    return 0;
}