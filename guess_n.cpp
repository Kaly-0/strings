#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;
int attempts = 0;
int nombre_utilisateur;

int main () {
	srand(time(0));
	int nombre = (rand() % 100) + 1;

	cout << "Guess the number (between 1 and 100)! \n";

	while (nombre_utilisateur != nombre) {
		cout << "Your guess: ";
		cin >> nombre_utilisateur;

		if (nombre_utilisateur > nombre) {
			cout << "Lower! \n"; 
		}
		else if (nombre_utilisateur < nombre) {
			cout << "Higher! \n";
		}
		else {
			cout << "Congratulations! \n";
		}
		++attempts;		
	}
		cout << "You found it in " << attempts << " attempts! \n";
		return 0;
}
