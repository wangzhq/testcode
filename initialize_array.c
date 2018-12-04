#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    int arr[] = {2,3,[5]=100,300};
    size_t sz = sizeof(arr)/sizeof(int);
    for(size_t i = 0; i < sz; i++)
        printf("%d\n",arr[i]);

    return 0;
}
