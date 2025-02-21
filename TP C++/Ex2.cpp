#include <iostream>
#include <vector>

int main() {
    std::vector<int> tab = {1, 2, 3, 4, 5, 6};
    int nb = 7;

    std::cout << "Les couples dont la somme est égale à " << nb << ":" << std::endl;
    
    for (size_t i = 0; i < tab.size(); i++) {
        for (size_t j = i + 1; j < tab.size(); j++) {
            if (tab[i] + tab[j] == nb) {
                std::cout << "(" << tab[i] << ", " << tab[j] << ")" << std::endl;
            }
        }
    }

    return 0;
}

