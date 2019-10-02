#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int a[3] = {3,5,4};
    int *p = &a[0];

    //p + 1 == &a[0] + 1;

    printf("%p, %p, %p\n", p, p+1, p+2);  //p是不变的；
    printf("%p\n", p);
    printf("%p, %p, %p\n", &a[0], &a[1], &a[2]);
//    printf("%p, %p, %p\n", p, ++p, ++p);
    printf("%p\n", p);
    printf("%p\n", ++p);
    printf("%p\n", ++p);  //修改了p本身；
    printf("%p\n", p);

    return 0;
}
