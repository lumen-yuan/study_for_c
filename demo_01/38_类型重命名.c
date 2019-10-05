#include <stdio.h>
#include <stdlib.h>

//结构体重命名
typedef struct Node
{
    char a;
}_Node; //结构体重命名

void fun(int i, double j)
{
    printf("%d, %lf\n",i, j);
}
//函数重命名
typedef void (*pFun)(int, double);

int main(void)
{
    struct Node node1;
    _Node node2;

    pFun p1 = fun;
    p1(23,12.2);
    return 0;
}
