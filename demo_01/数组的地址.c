#include <stdio.h>
#include <stdlib.h>

void fun(void)
{
    printf("hello\n");
}
int main(void)
{
    int a[5] = {1,2,3,4,5};
    fun();
    printf("%p,%p\n",a,&a);
    printf("%p,%p\n",fun,&fun);
    return 0;
}
