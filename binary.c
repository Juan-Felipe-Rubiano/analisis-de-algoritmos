#include "timer.h"
#include "utilidades.h"

static int binary_search_aux(int *arr, int target, size_t size);
static int binary_search(int *arr, int target, size_t beg, size_t end);

int main(void) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    int res = binary_search_aux(arr_ordenado_pequenio, target, size);
    clock_gettime(CLOCK_MONOTONIC, &end);

    printf("Linear search: %.6f ms\n", elapsed_ms(start, end));
    res >= 0 ? printf("Posicion encontrada: %d\n", res)
             : printf("No encontrado\n");

    return 0;
}

static int binary_search_aux(int *arr, int target, size_t size) {
    if (size == 0)
        return -1;
    return binary_search(arr, target, 0, size - 1);
}

static int binary_search(int *arr, int target, size_t beg, size_t end) {
    if (beg > end)
        return -1;

    size_t mid = beg + (end - beg) / 2;

    if (arr[mid] == target)
        return (int)mid;
    else if (arr[mid] > target) {
        return binary_search(arr, target, beg, mid - 1);
    } else if (arr[mid] < target) {
        return binary_search(arr, target, mid + 1, end);
    }
    return -1;
}
