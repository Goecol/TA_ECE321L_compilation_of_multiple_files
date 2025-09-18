#include "header1.h"

int make_double(int a) {
    a = a * 2;
    make_half(a);
    return a;
}