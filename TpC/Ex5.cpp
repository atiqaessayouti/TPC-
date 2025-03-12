#include <iostream>
#include <limits>

int main() {
    const int rows = 3;
    const int cols = 4;
    int tableau[rows][cols] = {
        {-2, 1, -3, 4},
        {-1, 2, 1, -5},
        {4, -1, 2, 1}
    };

    int maxSomme = std::numeric_limits<int>::min();
    int debutLigne = 0, finLigne = 0;
    int debutCol = 0, finCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = i; k < rows; k++) {
                for (int l = j; l < cols; l++) {
                    int sommeActuelle = 0;

                    for (int m = i; m <= k; m++) {
                        for (int n = j; n <= l; n++) {
                            sommeActuelle += tableau[m][n];
                        }
                    }

                    if (sommeActuelle > maxSomme) {
                        maxSomme = sommeActuelle;
                        debutLigne = i;
                        finLigne = k;
                        debutCol = j;
                        finCol = l;
                    }
                }
            }
        }
    }

    std::cout << "Somme maximale = " << maxSomme << std::endl;
    std::cout << "Sous-tableau maximal :" << std::endl;
    for (int i = debutLigne; i <= finLigne; i++) {
        for (int j = debutCol; j <= finCol; j++) {
            std::cout << tableau[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
