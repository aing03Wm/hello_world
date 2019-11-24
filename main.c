

#include <stdio.h>

#include "test.h"

int main(int argc, char *argv[])
{
    printf_s("Hello, World!\n");    // 遵循 C99 及之后的协议，采用带"_s"的字符串操作函数

    test();

    return 0;
}
