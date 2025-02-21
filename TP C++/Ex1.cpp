#include <iostream>
#include <vector>

int main() {
    std::vector<int> tab = {1, 2, 3, 1, 2};
    int nombre = 0;

    for (size_t i = 0; i < tab.size(); i++) {
        int comp = 0;
        for (size_t j = 0; j < tab.size(); j++) {
            if (tab[i] == tab[j]) {
                comp++;
            }
        }
        if (comp == 1) {
            nombre = tab[i];
        }
    }

    std::cout << "Le nombre unique du tableau est : " << nombre << std::endl;

    return 0;
}

