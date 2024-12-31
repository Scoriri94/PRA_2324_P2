#include <iostream>
#include "mochila.cpp"  // Incluimos el archivo de la implementación de mochila

int main() {
    // Test 1: Caso básico
    std::cout << "Test 1: Caso básico\n";
    int p[] = {1, 3, 2, 4};
    int b[] = {10, 20, 15, 20};
    int M = 5;
    int N = sizeof(p) / sizeof(p[0]);
    mochila(N, p, b, M);  // Llamada a la función mochila

    // Test 2: Caso con peso máximo permitido
    std::cout << "Test 2: Caso con peso máximo permitido\n";
    int p2[] = {5, 4, 6, 3, 7}; 
    int b2[] = {10, 40, 30, 50, 70}; 
    int M2 = 10;
    int N2 = sizeof(p2) / sizeof(p2[0]);
    mochila(N2, p2, b2, M2);  // Llamada a la función mochila

    // Test 3: Caso con todos los elementos con el mismo peso y beneficio
    std::cout << "Test 3: Caso con todos los elementos con el mismo peso y beneficio\n";
    int p3[] = {2, 2, 2, 2};
    int b3[] = {5, 5, 5, 5};
    int M3 = 6;
    int N3 = sizeof(p3) / sizeof(p3[0]);
    mochila(N3, p3, b3, M3);  // Llamada a la función mochila

    // Test 4: Caso con capacidad de mochila muy pequeña
    std::cout << "Test 4: Caso con capacidad de mochila muy pequeña\n";
    int p4[] = {10, 20, 30};
    int b4[] = {60, 100, 120};
    int M4 = 5;
    int N4 = sizeof(p4) / sizeof(p4[0]);
    mochila(N4, p4, b4, M4);  // Llamada a la función mochila

    // Test 5: Caso con mochila que puede cargar todos los items
    std::cout << "Test 5: Caso con mochila que puede cargar todos los items\n";
    int p5[] = {1, 1, 1, 1, 1};
    int b5[] = {10, 20, 30, 40, 50};
    int M5 = 5;
    int N5 = sizeof(p5) / sizeof(p5[0]);
    mochila(N5, p5, b5, M5);  // Llamada a la función mochila

    return 0;
}

