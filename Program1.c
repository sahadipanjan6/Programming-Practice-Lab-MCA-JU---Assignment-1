#include <stdio.h>
#include <stdbool.h>

void main()
{
    // declaring variables with different datatypes
    int a = 25;
    float b = 25.67;
    double c = 369.47;
    short d = 8;
    long e = 64;
    char f = 'f';
    bool g = false;
    
    // displaying the sizes
    
    printf("Size of %d = %ld Bytes\n", a, sizeof(a));
    printf("Size of %f = %ld Bytes\n", b, sizeof(b));
    printf("Size of %lf = %ld Bytes\n", c, sizeof(c));
    printf("Size of %d = %ld Bytes\n", d, sizeof(d));
    printf("Size of %d = %ld Bytes\n", e, sizeof(e));
    printf("Size of %c = %ld Bytes\n", f, sizeof(f));
    printf("Size of %d = %ld Bytes\n", g, sizeof(g));
}
