#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a = 12.3;
    int *p = (int *)&a;
    *p = 12;
    *(p+1) = 25;
    printf("info %d, %d\n", *p, *(p+1));
    printf("info %d\n",*(int *)((char *)&a+4));
    //知识点 指针的类型决定了指针的操作方式（或者说内存的操作大小）
    return 0;
}
