#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype> // Pour les fonctions std::toupper et std::tolower (Maguscule ou minuscule)

int main () {
    const int minNumber = 0;
    const int maxNumber = 50;
    const int maxTry = 5;

    srand(time(nullptr));

    char playAgain = 'Y'; // Initialise avec 'Y' pour permettre au joueur de jouer une première fois

    while (std::toupper(playAgain) == 'Y') { // Continue de jouer tant que le joueur choisit 'Y' ou 'y'
        int nomberMyster = rand() % (maxNumber + 1); // +1 pour inclure maxNumber

        for (int life = maxTry; life > 0; --life) {
            std::cout << "Entrez un nombre entre " << minNumber << " et " << maxNumber << " - Il vous reste " << life << " essai(s) : ";
            int nomberPlayer;
            std::cin >> nomberPlayer;

			if (life == 0) {
				std::cout << "Perdu ! Le nombre mystère est : " << nomberMyster << std::endl;
			}

            if (nomberPlayer == nomberMyster) {
                std::cout << "Bravo ! Vous avez trouvé le nombre mystère : " << nomberMyster << std::endl;
                break; // Sort de la boucle for car le joueur a trouvé le nombre mystère

            } else if (life == 1) {
				std::cout << "Perdu ! Le nombre mystère est : " << nomberMyster << std::endl;
			} else if (nomberPlayer < nomberMyster) {
                std::cout << "Non, c'est plus grand." << std::endl;
            } else {
                std::cout << "Non, c'est plus petit." << std::endl;
            }
        }

        std::cout << "Rejouer ? [Y/N] : ";
        std::cin >> playAgain;

        if (std::toupper(playAgain) == 'N') {
            break; // Sort de la boucle while si le joueur choisit 'N' ou 'n'
        }
    }

    std::cout << "Merci d'avoir joué ! Au revoir." << std::endl;
    return 0;
}
