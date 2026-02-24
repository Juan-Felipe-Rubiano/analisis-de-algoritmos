#pragma once
#include <stdbool.h>

/**
 * @brief la función realiza el algoritmo iterativo descrito en 3.1 del
 * docuemnto. Buscando iterativamente un elemento con valor igual al iterador.
 * @param s la secuencia no decreciente de enteros mayores a cero
 * @param tam el tamaño del arreglo. Aunque no se ha colocado en el algoritmo,
 * en C es necesario recibir este parámetro, pues no existe un método ".length"
 * o similar
 * @return booleano que indica si se encontró tal elemento o no
 */

bool iterative_search(int *s, int tam);
