#include <iostream>
#include <vector>
#include "DyV.h"

int main() {

	std::vector<int> ascendente_int = {3,5,7,9,11,15,19,21,30};
	std::vector<float> ascendente_float = {1.2,3.5,6.3,7.8,10.0};
	std::vector<char> ascendente_char = {'A','B','C','a','b','c'};

	std::vector<int> descendente_int = {10, 8, 5, 3, 1};
	std::vector<float> descendente_float = {9.5, 7.3, 4.1, 2.0, 0.5};
	std::vector<char> descendente_char = {'z', 'y', 'x', 'w', 'v'};
	
	int resultado1 = busquedaBinaria(11, ascendente_int, 0, 8);
	int resultado2 = busquedaBinaria(7.8f, ascendente_float, 0, 4);
	int resultado3 = busquedaBinaria('b', ascendente_char, 0, 5);

	int resultado4 = busquedaBinaria_INV(1, descendente_int, 0, 4);
	int resultado5 = busquedaBinaria_INV(9.5f, descendente_float, 0, 4);
	int resultado6 = busquedaBinaria_INV('z', descendente_char, 0, 4);
	
	if (resultado1 != -1) {
		std::cout << "El valor esta en la posición: " << resultado1 << std::endl;
	} else {
		std::cout << "El valor no esta en el arreglo." << std::endl;
	}

	if (resultado2 != -1) {
   		 std::cout << "El valor esta en la posición: " << resultado2 << std::endl;
	} else {
    		std::cout << "El valor no esta en el arreglo." << std::endl;
	}

	if (resultado3 != -1) {
    		std::cout << "El valor esta en la posición: " << resultado3 << std::endl;
	} else {
    		std::cout << "El valor no esta en el arreglo." << std::endl;
	}

	if (resultado4 != -1) {
    		std::cout << "El valor esta en la posición: " << resultado4 << std::endl;
	} else {
   		 std::cout << "El valor no esta en el arreglo." << std::endl;
	}

	if (resultado5 != -1) {
   		 std::cout << "El valor esta en la posición: " << resultado5 << std::endl;
	} else {
    		std::cout << "El valor no esta en el arreglo." << std::endl;
	}

	if (resultado6 != -1) {
    		std::cout << "El valor esta en la posición: " << resultado6 << std::endl;
	} else {
    		std::cout << "El valor no esta en el arreglo." << std::endl;
	}
}
	
