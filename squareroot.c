#include "factors.h"

int square_root(int n) {
    int x = n;
    int root = 1;
    double precision = 0.000001; 

    while (x - root > precision) {
        x = (x + root) / 2;
        root = n / x;
    }

    return (root);
}
