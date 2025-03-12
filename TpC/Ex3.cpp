#include <iostream>

void afficherTableau(const int tab[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int tab[] = {3, 8, 5, 4, 7, 2}; 
    int size = sizeof(tab) / sizeof(tab[0]); 
    int tmp;

    std::cout << "Tableau original :" << std::endl;
    afficherTableau(tab, size);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (tab[i] % 2 == 0 && tab[j] % 2 != 0) {
                // Swap elements
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    std::cout << "Tableau après le tri des éléments pairs :" << std::endl;
    afficherTableau(tab, size);

    return 0;
}