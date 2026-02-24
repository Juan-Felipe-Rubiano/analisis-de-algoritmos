#define _POSIX_C_SOURCE 199309L
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "DyV.h"
#include "iterativo.h"
#include "timer.h"

#define MAX_N 10000000
#define STEP 100000
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Genera arreglo no decreciente
void generar_arreglo_itr(int *arr, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = i + n + 1;

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void generar_arreglo_dyv(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 2;
    }
}

int main() {
    srand(42);

    FILE *f = fopen("resultado2.csv", "w");
    if (!f) {
        perror("Error creando archivo");
        return 1;
    }

    fprintf(f, "n,iterativo,dyv\n");

    int *arr = malloc((MAX_N + 1) * sizeof(int));
    if (!arr) {
        perror("eror en malloc");
        return 1;
    }

    struct timespec start, end;
    volatile bool resultado;

    for (int n = STEP; n <= MAX_N; n += STEP) {
        int reps = MAX(10, 100000000 / n);
        generar_arreglo_itr(arr, n);
        // iterativo
        clock_gettime(CLOCK_MONOTONIC, &start);

        for (int r = 0; r < reps; r++)
            resultado = iterative_search(arr, n);

        clock_gettime(CLOCK_MONOTONIC, &end);

        double iter_ms = elapsed_ms(start, end) / reps;

        // dividir y vencer
        generar_arreglo_dyv(arr, n);
        clock_gettime(CLOCK_MONOTONIC, &start);

        for (int r = 0; r < reps; r++)
            D_y_V_search(arr, n);

        clock_gettime(CLOCK_MONOTONIC, &end);

        double dyv_ms = elapsed_ms(start, end) / reps;

        fprintf(f, "%d,%.6f,%.6f\n", n, iter_ms, dyv_ms);
        printf("terminado con n=%d \n", n);
    }

    fclose(f);
    free(arr);

    printf("\nResultados guardados en resultado2.csv\n");

    return 0;
}
