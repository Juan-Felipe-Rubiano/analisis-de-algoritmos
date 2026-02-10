#include "utilidades.h"
void print_arr(const int *arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arr_pequenio[] = {1, 4, 2, 8, 3, 6, 5, 9, 7};
int arr_ordenado_pequenio[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(arr_pequenio) / sizeof(arr_pequenio[0]);
int target = 6;
