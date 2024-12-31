#include <iostream>

void mochila(int N, int p[], int b[], int M) {

    int **matriz = new int*[N + 1];

    for (int i = 0; i <= N; i++) {
        matriz[i] = new int[M + 1];
    }

    // Initialize the matrix with 0s for the base cases
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i == 0 || j == 0) {
                matriz[i][j] = 0; 
            } 
            // If the current item's weight is less than or equal to the current capacity
            else if (p[i - 1] <= j) {
                // Take the maximum value between including the current item and not including it
                matriz[i][j] = std::max(b[i - 1] + matriz[i - 1][j - p[i - 1]], matriz[i - 1][j]);
            } 
            // If the current item's weight is more than the current capacity, do not include it
            else {
                matriz[i][j] = matriz[i - 1][j];
            }
        }
    }

    std::cout << "The maximum value that can be obtained is: " << matriz[N][M] << std::endl;

    for (int i = 0; i <= N; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}


