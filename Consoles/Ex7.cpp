// Crie um programa que leia uma lista de números e imprima a média aritmética da lista.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Digite o numero de elementos: ";
    cin >> n;

    vector<double> nums(n);

    cout << "Digite os numeros: ";

    for(int i = 0; i < n; i++) {
        cin>> nums[i];
        sum += nums[i];

    }

    double average = sum / n;

    cout << "A media aritmetica e: " << average << endl;

    return 0;
}