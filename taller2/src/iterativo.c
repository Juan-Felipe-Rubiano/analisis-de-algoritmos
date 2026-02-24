#include "iterativo.h"

bool iterative_search(int *s, int tam) {
    for (int i = 0; i < tam; i++) {
        if (s[i] == i + 1)
            return true;
    }
    return false;
}
