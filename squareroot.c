#include "factors.h"

int square_root(long long int n)
{
    long long int x = n;
    long long int root = 1;
    double precision = 0.000001; 

    while (x - root > precision) {
        x = (x + root) / 2;
        root = n / x;
    }

    return (root);
}
