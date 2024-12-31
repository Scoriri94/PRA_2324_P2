//porque en este se rellena la matriz con valores indefinidos y en mochila se llena directamente con la mejor opcion?
#include <limits>
#include <iostream>
#include <algorithm>
//const int ROWS 4;
//const int COLUMNS 8;

void cambio(int v[], int N, int M) {
    std::cout << "El programa ha comenzado." << std::endl;
    int** matrix = new int*[N];
    //int infinito = std::numeric_limits<int>::max();
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[M + 1];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= M; j++) {
            if (j == 0) {
                matrix[i][j] = 0;
            } else {
            matrix[i][j] = std::numeric_limits<int>::max();
            }
        }
    }
 
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= M; j++) {
            if (v[i] <= j) {
                if ( i == 0) {
                    matrix [i][j] = std::min(matrix[i][j], matrix[i][j - v[i]] + 1);
                } else {
                    matrix [i][j] = std::min(matrix[i - 1][j], matrix[i][j - v[i]] + 1);
                }
            } else {
                if ( i > 0) {
                matrix [i][j] = matrix [i - 1][j];
                }
            }
        }
    }

    std::cout << "El numero minimo de monedas para devolver " << M << " es de: " << matrix[N - 1][M] << " monedas " << std::endl;

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}




