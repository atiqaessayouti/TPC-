#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<std::vector<int>> tableau = {{2, 5}, {1, 2, 3, 4}, {1, 1, 3}};

    int maxSomme = std::numeric_limits<int>::min();
    int ligneMax = 0;

    for (int i = 0; i < tableau.size(); i++) {
        int somme = 0;

        for (int j = 0; j < tableau[i].size(); j++) {
            somme += tableau[i][j];
        }

        if (somme > maxSomme) {
            maxSomme = somme;
            ligneMax = i;
        }
    }

    std::cout << "La ligne " << ligneMax << " a la plus grande somme : " << maxSomme << 