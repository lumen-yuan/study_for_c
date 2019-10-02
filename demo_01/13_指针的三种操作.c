#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int *p = &a;

    //读操作
    printf("%p, %d, %d\n", p, *p, a);

    //写操作
    *p = 134;
    printf("%p, %d, %d\n", p, *p, a);

    //取地址
    printf("%p, %p, %p\n", p, &*p, &a);
    /*
    0060FEF8, 12, 12
    0060FEF8, 134, 134
    0060FEF8, 0060FEF8, 0060FEF8
    */
    return 0;
}
