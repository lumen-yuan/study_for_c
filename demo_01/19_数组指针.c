#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
/*
    int *p = a; //表示数组a为一个指针类型的变量；
    int *p = &a;//表示a为一个变量，p指向a的首地址；
    printf("%d,%d\n",p[2],*(p+2));//p[2] = *(p+2) = *(2+p) = 2[p];
*/
/*
    int (*p)[5] = &a; //数组指针，表示成员是int类型，*p == a;
    printf("%d\n",(*p)[2]);
*/
/*
    (int *)e[4] = {a,b,c,d};//指针数组 表示成员是(int *)类型；
    printf("%d\n", e[1][2]);
*/
    return 0;
}
