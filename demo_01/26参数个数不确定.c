#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void fun(int a, ...)//a用于指定未知参数的个数
{
    va_list vp; //定义参数数组；
    va_start(vp,a); //将参数装入参数数组
    printf("%d\n",va_arg(vp,int)); //va_arg用于取数据，从头开始，int表示数据类型
    printf("%d\n",va_arg(vp,int));
    printf("%d\n",va_arg(vp,int));
}
int main(void)
{
    fun(3,12,34,56);
    return 0;
}
