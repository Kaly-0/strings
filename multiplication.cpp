#include <iostream> 

using namespace std;
int chiffre;


int main () {
	cout << "Choisis un chiffre: ";
	cin >> chiffre;
	
	for (int i = 1; i < 10; i++) {
		cout << chiffre << "x" << i << " = " <<  chiffre * i  << "\n";
	}
}

