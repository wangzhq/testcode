
#include <stdio.h>
#include <stdlib.h>

typedef void(*func_t)(void);


func_t test(void)
{
    void f(void) {
        printf("called %s\n", __FUNCTION__);
    }

    return f;
}

int main()
{
    test()();
    return 0;
}
