#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int *p = &a;
    int * *p1 = &p;

    printf("a�ĵ�ַ��%p; *p�����ݣ�%p, *p�ĵ�ַ��%p; **p�����ݣ�%p, **p�ĵ�ַ��%p\n", &a, p, &p, p1, &p1);
    //a�ĵ�ַ��0060FEFC; *p�����ݣ�0060FEFC, *p�ĵ�ַ��0060FEF8; **p�����ݣ�0060FEF8, **p�ĵ�ַ��0060FEF4

    //�໥��ϵ:һ��ָ��ָ��һ��������*���ָ�룬���������������
    *p1 == p;
    *p == a;
    **p1 == *p == a;
    return 0;
}
