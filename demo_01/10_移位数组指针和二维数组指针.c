#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>

int main(void)
{
    int (*p)[5] = (int(*)[5])malloc(sizeof(int)*5);
    //memset(p,0,20);
    *(*p+0) = 1;
    *(*p+1) = 1;
    *(*p+2) = 1;
    *(*p+3) = 1;
    *(*p+4) = 1;

    int *p = &a[0];
    *(p+1) = 1;

    for(int i = 0; i< 5; i++)
    {
        printf("%d\n",(*p)[i]);
    }
    return 0;
}
