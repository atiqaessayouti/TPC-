#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> tableau = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};

    for (int i = 0; i < tableau.size(); i++) {
        int somme = 0;

        for (int j = 0; j < tableau[i].size(); j++) {
            somme += tableau[i][j];
        }

        std::cout << "Somme de la ligne " << (i + 1) << " : " << somme << std::endl;
    }

    return 0;
}