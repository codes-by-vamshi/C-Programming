#include <stdio.h>

int main() {
    float var = 345.123456789;
    double var1 = 345.123456789;
    printf("%.9f\n", var);//Float precise upto some digits only 
    printf("%.9f\n", var1);// more precise than float
    return 0;
}