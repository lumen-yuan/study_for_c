#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {0,1,2,3,4};
    int *p = &a[0];

    printf("指针的下标运算 %d, %d\n",a[3], p[3]);

    return 0;
}
