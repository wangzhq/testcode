
#include <stdio.h>
#include <stdlib.h>

typedef void(*func_t)(void);

// gcc support nest function
func_t test(void)
{
    void f(void) {
        printf("called %s\n", __func__);
    }

    return f;
}

int main()
{
    test()();
    return 0;
}
