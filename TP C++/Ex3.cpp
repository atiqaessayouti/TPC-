#include <iostream>
#include <vector>

void afficherTableau(const std::vector<int>& tab) {
    for (size_t i = 0; i < tab.size(); i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> tab = {3, 8, 5, 4, 7, 2};
    int tmp;

    std::cout << "Tableau original :" << std::endl;
    afficherTableau(tab);

    for (size_t i = 0; i < tab.size(); i++) {
        for (size_t j = i + 1; j < tab.size(); j++) {
            if (tab[i] % 2 == 0 && tab[j] % 2 != 0) {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    std::cout << "Tableau après le tri des éléments pairs :" << std::endl;
    afficherTableau(tab);

    return 0;
}

