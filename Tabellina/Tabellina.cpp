#include <iostream>

int main()
{
	int numero, i, moltiplica;

	do {

		std::cout << "Inserire un numero: ";
		std::cin >> numero;

	} while (numero <= 0);

	for (i = 0; i < 11; i++) {
		moltiplica = numero * i;
		std::cout << numero << "x" << i << " = " << moltiplica << "\n";
	}
}