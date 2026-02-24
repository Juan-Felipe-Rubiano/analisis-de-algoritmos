#pragma once
#include <stdbool.h>

/**
 * @brief la función realiza el algoritmo de tipo dividir y vencer descrito
 * en 4.1 del docuemnto. Llamando a la función auxiliar que recibe los
 * parámetros ajenos al procedimiento per sé.
 * @param s la secuencia no decreciente de enteros mayores a cero
 * @param tam el tamaño del arreglo. Aunque no se ha colocado en el algoritmo,
 * en C es necesario recibir este parámetro, pues no existe un método ".length"
 * o similar
 * @return booleano que indica si se encontró tal elemento o no
 */

bool D_y_V_search(int *s, int tam);

/**
 * @brief la función realiza el algoritmo de tipo dividir y vencer descrito
 * en 4.1 del docuemnto. Haciendo llamados recursivos hata encontrar (o no) un
 * elemento con valor igual al del punto medio.
 * @param s la secuencia no decreciente de enteros mayores a cero
 * @param begin el índice al primer elemento de la subsecuencia.
 * @param end índice al último elemento de la subsecuencia.
 * @return booleano que indica si se encontró tal elemento o no
 */

bool D_y_V_search_aux(int *s, int begin, int end);
