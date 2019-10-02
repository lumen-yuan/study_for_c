#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void)
{
    int *p = (int *)malloc(sizeof(int));
    int a = sizeof(size_t);//unsigned int == size_t
    /*
        size_t的大小由编译器决定、
        64位的编译器则为 long unsigned int ;
        32位的编译器则为 unsigned int ;
    */
    printf("ok, %d\n",a);
    return 0;
}
