#include <stdio.h>
#include <stdlib.h>

//�ṹ��������
typedef struct Node
{
    char a;
}_Node; //�ṹ��������

void fun(int i, double j)
{
    printf("%d, %lf\n",i, j);
}
//����������
typedef void (*pFun)(int, double);

int main(void)
{
    struct Node node1;
    _Node node2;

    pFun p1 = fun;
    p1(23,12.2);
    return 0;
}
