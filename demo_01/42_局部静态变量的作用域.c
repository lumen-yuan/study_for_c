#include <stdio.h>
#include <stdlib.h>

void fun()
{
    //局部变量，作用域或者说生命周期是该函数，函数调用时分配资源，函数结束即被系统释放；
    int a = 1;
    //静态局部变量，在运行时程序加载资源阶段就分配空间（只加载了一次），生命周期与程序相同，作用域为该函数；
    static int b = 1;
    a++;
    b++;
    printf("a = %d, b = %d\n",a, b);
}
int main(void)
{
    fun();
    fun();
    fun();
    return 0;
}

/*
    运行结果：
    a = 2, b = 2
    a = 2, b = 3
    a = 2, b = 4
*/
