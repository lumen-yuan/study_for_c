#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int *p = &a;
    int b = 34;

    printf("指针p的地址是：%p;指针p的值是: %p; 变量a的地址是：%p\n", &p, p, &a);
//    指针p的地址是：0060FEF8;指针p的值是: 0060FEFC; 变量a的地址是：0060FEFC
 //   首先p本身有地址，然后p的值存储的是a的地址；

    p = &b;
    printf("指针p的地址是：%p;指针p的值是: %p; 变量b的地址是：%p\n", &p, p, &b);

    printf("p作用：%d\n",*p); //*p 就是这个变量本身；

    return 0;
}
