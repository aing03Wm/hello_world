
#include "add.h"

int test(void)
{
    int a = 10;
    int b = 20;

    printf_s( "30 + 40 = %d\n", add(30, 40) );
    printf_s( "%d + %d = %d\n", a, b, add(a,b) );
}
