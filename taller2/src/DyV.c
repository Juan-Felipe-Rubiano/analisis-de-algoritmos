#include "DyV.h"

bool D_y_V_search(int *s, int tam) { return D_y_V_search_aux(s, 0, tam - 1); }

bool D_y_V_search_aux(int *s, int begin, int end) {
    if (begin > end)
        return false;
    int mid = begin + (end - begin) / 2;

    if (s[mid] == mid + 1)
        return true;
    else if (s[mid] > mid + 1)
        return D_y_V_search_aux(s, begin, mid - 1);
    else
        return D_y_V_search_aux(s, mid + 1, end);
}
