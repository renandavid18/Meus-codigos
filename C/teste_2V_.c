#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define o tamanho da matriz (2000x2000 = 4 milhões de elementos)
#define N 2000

// Alocação estática grande pode causar stack overflow, 
// melhor usar alocação dinâmica.
double A[N][N];
double B[N][N];
double C[N][N];

int main() {
    printf("Iniciando multiplicação de matrizes %dx%d...\n", N, N);
    
    // Inicializar matrizes com dados aleatórios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = (double)rand() / RAND_MAX;
            B[i][j] = (double)rand() / RAND_MAX;
            C[i][j] = 0.0;
        }
    }

    clock_t start = clock();

    // Núcleo da operação (O(N^3)) - Muito pesado!
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Concluído em: %.2f segundos\n", cpu_time_used);
    
    // Evita otimização excessiva do compilador removendo o resultado
    printf("Resultado parcial: %f\n", C[0][0]);

    return 0;
}
