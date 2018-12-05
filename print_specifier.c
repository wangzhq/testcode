
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

#define println(fmt, ...) ({ \
    printf(fmt "\n", __VA_ARGS__); \
})
#define P(A) printf(""#A"=%d\n", A);
#define PP(A) printf("%s=%d\n", #A, A);
#define PNAME(A,B) printf("%d" "\n", A##B);
#define MACRO_PRINT(fmt, ...) printf(fmt "\n", ##__VA_ARGS__);  // ## prevent error when there isn't exist args
// typeof only support by gcc
#define TYPEOF_PLUS(x, y) ({ \
    typeof(x) z = x; \
    z += y; \
    z;})


int main(int argc, char* argv[])
{
    int a = 99, aa = 199;
    int ab = 222;
    unsigned int b = 999;
    unsigned char c = 0xFF;
    float pi = 3.14;
    int *pa = &aa;
    float fe = 314.15;
    double df = 2314.15926;
    int neg = -1;
    // %[flags][width][.precision][length]specifier
    // flags [-][+][space][#][0]
    // width [n][*]
    // .precision [n][*]
    // specifier [d][u][o][x/X][f/F][g/G][e/E][a/A][c][s][p][n][%]
    printf("%c %s\n", 'k', "xyz");
    printf("%d %u %#x %#o %f \n", a, b, c, 100, pi); // #, add 0x to hexadecimal
    printf("nothing%n(%p) %%\n", pa, pa);   // print characters number had set to aa
    printf("%e %E\n", fe, fe);
    printf("%f %F %g %G %#f \n", df, df, df, df, 1000.2);  // g G
    printf("%12.4f\n", df);     // width add precision
    printf("%-12.4f\n", df);    // left-justify, default right-justify
    printf("%*u\n", 5, b);      // preceding argument as width
    printf("%.*f\n", 6, fe);    // preceding argument as precision
    printf("% f\n", fe);        // blank
    printf("%+d %+d %+d \n", neg, a, aa);   // plus + sign to postive number
    printf("%06d\n", 100);      // pad 0 at left when not fullness

    println("%d %s", 100, "abc");
    printf("%s" "\n", "cde");
    P(a);
    PP(aa);
    PNAME(a,b);
    MACRO_PRINT("%s", "convenient");
    MACRO_PRINT("error")
    MACRO_PRINT("%d", TYPEOF_PLUS(10,20))
#if 0
#error this is a error
#endif

    return 0;
}
