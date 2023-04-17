// Crie um programa que leia uma lista de números e imprima o maior e o menor número da lista.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;
    int num;

    cout << "Digite uma lista de números (digite 0 para parar): " << endl;

    do {
        cin >> num;
        if(num != 0) {
            numeros.push_back(num);
        }
    } while (num!= 0);
    
    sort(numeros.begin(), numeros.end());

    cout << "Menor número: " << numeros.front() << endl;
    cout << "Maior número: " << numeros.back() << endl;
    
    return 0;
}