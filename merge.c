#include "timer.h"
#include "utilidades.h"

static void merge_sort(int *arr, size_t size);

int main(void) {
    struct timespec start, end;

    clock_gettime(CLOCK_MONOTONIC, &start);
    merge_sort(arr_pequenio, size);
    clock_gettime(CLOCK_MONOTONIC, &end);

    print_arr(arr_pequenio, size);

    printf("Merge sort: %.6f ms\n", elapsed_ms(start, end));

    return 0;
}

static void merge_sort(int *arr, size_t size) {}
