#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 124;
    int *p = &a;

//    int *p1 = &p;//这种写法是错误的

    (int *) *p1 = &p;//这种写法是正确的；*p1表示p1是指针类型，(int *)表示p是指针变量；


    return 0;
}
