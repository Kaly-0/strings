#include <iostream>
#include <limits>

using namespace std;
int n;
double somme = 0;
double moyenne;

int main () {
	cout << "Combien de chiffres voulez vous choisir ?\n";
	while (!(cin >> n) || n <= 0) {
		cout << "Veuillez choisir un chiffre positif \n";
		cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Ressaisissez votre chiffre \n";
	}

	for (int i = 1; i<= n; i++) {
		double note;
		cout << "Entrez vos notes: (entre 0 et 20)\n";

		while (!(cin >>  note) || note < 0 || note > 20) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Entrez vos notes: (entre 0 et 20)\n";
		}
		 somme += note;
	}
	moyenne = somme / n;
	cout << "La moyenne des " << n << " notes est : " << moyenne << '\n';
}
