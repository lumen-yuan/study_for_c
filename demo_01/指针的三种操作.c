#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int *p = &a;

    //������
    printf("%p, %d, %d\n", p, *p, a);

    //д����
    *p = 134;
    printf("%p, %d, %d\n", p, *p, a);

    //ȡ��ַ
    printf("%p, %p, %p\n", p, &*p, &a);
    /*
    0060FEF8, 12, 12
    0060FEF8, 134, 134
    0060FEF8, 0060FEF8, 0060FEF8
    */
    return 0;
}
