#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int *p = &a;
    int * *p1 = &p;

    printf("a的地址：%p; *p的内容：%p, *p的地址：%p; **p的内容：%p, **p的地址：%p\n", &a, p, &p, p1, &p1);
    //a的地址：0060FEFC; *p的内容：0060FEFC, *p的地址：0060FEF8; **p的内容：0060FEF8, **p的地址：0060FEF4

    //相互关系:一个指针指向一个变量，*这个指针，就是这个变量本身；
    *p1 == p;
    *p == a;
    **p1 == *p == a;
    return 0;
}
