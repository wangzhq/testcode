
#include <stdio.h>
#include <stdlib.h>

// typedef void(func_t)(void);  // function type
typedef void(*func_t)(void);    // function pointer type

// gcc support nest function
func_t test(void)
{
    const char *literal_str = "abc";
    void f(void) {
        // literal_str must defined before f
        printf("called %s, l_str %s(%p)\n", __func__, literal_str, &literal_str);
    }

    return f;
}

int main()
{
    test()();
    return 0;
}
