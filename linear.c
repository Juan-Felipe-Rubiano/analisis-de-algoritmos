#include "timer.h"
#include "utilidades.h"

static int linear_search(int *arr, int target, size_t size);

int main(void) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    int res = linear_search(arr_pequenio, target, size);
    clock_gettime(CLOCK_MONOTONIC, &end);

    printf("Linear search: %.6f ms\n", elapsed_ms(start, end));
    res >= 0 ? printf("Posicion encontrada: %d\n", res) : printf("No encontrado\n");

    return 0;
}

static int linear_search(int *arr, int target, size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
