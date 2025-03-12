#include <iostream>
#include <limits>

int main() {
  
    int tableau[3][4] = {
        {2, 5, 0, 0}, 
        {1, 2, 3, 4},  
        {1, 1, 3, 0}   
    };

    int cols[3] = {2, 4, 3};

    int maxSomme = std::numeric_limits<int>::min();
    int ligneMax = 0;

    for (int i = 0; i < 3; i++) {
        int somme = 0;

      
        for (int j = 0; j < cols[i]; j++) {
            somme += tableau[i][j];
        }

       
        if (somme > maxSomme) {
            maxSomme = somme;
            ligneMax = i;
        }
    }

    std::cout << "La ligne " << ligneMax + 1 << " a la plus grande somme : " << maxSomme << std::endl;

    return 0;
}