#include <stdio.h>
#include <stdlib.h>

int fun(int a)
{
    printf("%d\n",a);
    return 0;
}
int main(void)
{
    int (*p)(int) = fun;
    //如何查看函数的类型，去掉函数名即为函数类型，此处的*p要带(),表示函数指针；
    p(2);
    return 0;
}
