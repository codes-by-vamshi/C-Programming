#include <stdio.h>
#include <limits.h>

int main() {
    int min = INT_MIN;
    int max = INT_MAX;
    printf("The min is %d and max is %d. ", min, max);
    unsigned int u_min = 0;
    unsigned int u_max = UINT_MAX;
    printf("Now for unsigned, the min is %u and max is %u", u_min, u_max);
    return 0;
}