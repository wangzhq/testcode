#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


typedef struct
{
    int x;
    short y[3];
    long long z;
} data_t;

int main(int argc, char* argv[])
{
    printf("x %lu\n", offsetof(data_t, x));
    printf("y %lu\n", offsetof(data_t, y));
    printf("y[1] %lu\n", offsetof(data_t, y[1]));
    printf("z %lu\n", offsetof(data_t, z));
    return EXIT_SUCCESS;
}
