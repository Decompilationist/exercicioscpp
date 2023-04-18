// Crie um programa que leia uma lista de nomes e ordene-os em ordem alfabética.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> nomes;

    std::string nome;
    while (std::cin >> nome) {
        nomes.push_back(nome);
    }

    std::sort(nomes.begin(), nomes.end());

    std::cout << "Nomes ordenados em ordem afabetica: \n";
    for(const auto& n : nomes) {
        std::cout << n << '\n';
    }

    return 0;
    
}