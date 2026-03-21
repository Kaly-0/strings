#include <iostream>
using namespace std;

int main () {
	double number1;
	double number2;
	char operateur;
	double resultat;


	cout << "Enter the first number : ";
        cin >> number1;
	cout << "Enter the operator (+,-,*,/) : ";
	cin >> operateur;
	cout << "Enter the second number: ";
	cin >> number2;
		switch (operateur) {
			case '+':
				resultat = number1 + number2;
				break;
			case '-':
				resultat = number1 - number2;
				break;
			case '*':
				resultat = number1 * number2;
				break;
			case '/':
				if (number1 == 0) {
					cout << "Erreur: division par 0 impossible \n"; }
				else {					
					resultat = number1 / number2;
				}
				break;
}

	cout << "Résultat " << number1 << " " << operateur << " " << number2 << " = " << resultat << "  \n";
	return 0;
}

