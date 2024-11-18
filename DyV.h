#ifndef DYV_H
#define DYV_H

#include <vector>

template <typename T>
int busquedaBinaria(const T& X, const std::vector<T>& V, int inicio, int fin) {
	while(inicio <= fin){
		int medio = (inicio + fin) / 2;

		if (V[medio] == X) {
			return medio;
		}
		else if (V[medio] < X) {
			inicio = medio + 1;
		} 
		else { 
			fin = medio - 1;
		}
	}
	return -1;
}

template <typename T>
int busquedaBinaria_INV(const T& X, const std::vector<T>& V, int inicio, int fin) {
	while (inicio <= fin) {
		int medio = (inicio + fin) / 2;
		if (V[medio] == X) {
			return medio;
		} else if (V[medio] < X) {
			fin = medio - 1;
		} else {
			inicio = medio + 1;
		}
	}
	return -1;
}

#endif 
