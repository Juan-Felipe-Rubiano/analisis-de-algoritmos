#include "timer.h"
#include "utilidades.h"

static void bubble_sort(int *arr, size_t size);

int main(void) {
    struct timespec start, end;

    clock_gettime(CLOCK_MONOTONIC, &start);
    bubble_sort(arr_pequenio, size);
    clock_gettime(CLOCK_MONOTONIC, &end);

    print_arr(arr_pequenio, size);

    printf("Bubble sort: %.6f ms\n", elapsed_ms(start, end));

    return 0;
}

static void bubble_sort(int *arr, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
