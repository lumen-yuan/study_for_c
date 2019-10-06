#include <stdio.h>
#include <stdlib.h>

struct AA
{
 //   struct BB b1;
    struct BB* b1;
    int a;
};

struct BB
{
    struct AA* a1;
    int a;
};
int main (void)
{

    return 0;
}

//编译报错找不到b1的实体；因为在内存分配的时候不知道真个AA结构体的大小；
/*
    第一结构体不能相互嵌套实例，可以嵌套指针；
    第二结构体 不能包含 自己的实例
*/
