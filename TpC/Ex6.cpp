#include <iostream>

int main() {
  
    int tableau[3][4] = {
        {1, 2, 3, 0},  
        {4, 5, 0, 0},  
        {6, 7, 8, 9}   
    };

  
    int cols[3] = {3, 2, 4};

    for (int i = 0; i < 3; i++) {
        int somme = 0;

       
        for (int j = 0; j < cols[i]; j++) {
            somme += tableau[i][j];
        }

        std::cout << "Somme de la ligne " << (i + 1) << " : " << somme << std::endl;
    }

    return 0;
}