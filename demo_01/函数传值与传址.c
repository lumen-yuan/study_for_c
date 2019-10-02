#include <stdio.h>
#include <stdlib.h>

void fun(int *p)
{
    printf("p = %p\n",p);
    p = NULL;
    printf("p = %p\n",p);
    return ;
}
void fun2(int* *p)
{
    printf("p = %p\n",*p);
    *p = NULL;
    printf("p = %p\n",*p);
    return ;
}
int main(void)
{
    int a = 12;
    int *p1 = &a;
    printf("a = %p\n",&a);
    printf("p1 = %p\n",p1);
//    fun(p1);
 //   a = 0060FEF8 p1 = 0060FEF8 p = 0060FEF8 p = 00000000 p1 = 0060FEF8
    fun2(&p1);
    printf("p1 = %p\n",p1);

    return 0;
}
