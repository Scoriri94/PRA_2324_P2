#include <iostream>
#include "monedas.cpp"  // Incluimos el archivo de la implementación de cambio

int main() {
    // Test 1: Caso básico
    std::cout << "Test 1: Caso básico\n";
    int v1[] = {1, 2, 5};
    int N1 = sizeof(v1) / sizeof(v1[0]);
    int M1 = 11;  // Devolver 11 unidades
    cambio(v1, N1, M1);  // Llamada a la función cambio

    // Test 2: Caso con varias monedas
    std::cout << "Test 2: Caso con varias monedas\n";
    int v2[] = {1, 2, 5, 10};
    int N2 = sizeof(v2) / sizeof(v2[0]);
    int M2 = 34;  // Devolver 34 unidades
    cambio(v2, N2, M2);  // Llamada a la función cambio

    // Test 3: Caso con monedas grandes
    std::cout << "Test 3: Caso con monedas grandes\n";
    int v3[] = {10, 50, 100, 200};
    int N3 = sizeof(v3) / sizeof(v3[0]);
    int M3 = 350;  // Devolver 350 unidades
    cambio(v3, N3, M3);  // Llamada a la función cambio

    // Test 4: Caso con una sola moneda
    std::cout << "Test 4: Caso con una sola moneda\n";
    int v4[] = {5};
    int N4 = sizeof(v4) / sizeof(v4[0]);
    int M4 = 20;  // Devolver 20 unidades
    cambio(v4, N4, M4);  // Llamada a la función cambio

    // Test 5: Caso con monedas y cambio exacto
    std::cout << "Test 5: Caso con monedas y cambio exacto\n";
    int v5[] = {1, 3, 4};
    int N5 = sizeof(v5) / sizeof(v5[0]);
    int M5 = 6;  // Devolver 6 unidades
    cambio(v5, N5, M5);  // Llamada a la función cambio

    // Test 6: Caso con muchas monedas pero sin solución
    std::cout << "Test 6: Caso con muchas monedas pero sin solución\n";
    int v6[] = {5, 7};
    int N6 = sizeof(v6) / sizeof(v6[0]);
    int M6 = 3;  // No es posible devolver 3 unidades con estas monedas
    cambio(v6, N6, M6);  // Llamada a la función cambio

    return 0;
}


