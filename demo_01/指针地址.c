#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int *p = &a;
    int b = 34;

    printf("ָ��p�ĵ�ַ�ǣ�%p;ָ��p��ֵ��: %p; ����a�ĵ�ַ�ǣ�%p\n", &p, p, &a);
//    ָ��p�ĵ�ַ�ǣ�0060FEF8;ָ��p��ֵ��: 0060FEFC; ����a�ĵ�ַ�ǣ�0060FEFC
 //   ����p�����е�ַ��Ȼ��p��ֵ�洢����a�ĵ�ַ��

    p = &b;
    printf("ָ��p�ĵ�ַ�ǣ�%p;ָ��p��ֵ��: %p; ����b�ĵ�ַ�ǣ�%p\n", &p, p, &b);

    printf("p���ã�%d\n",*p); //*p ���������������

    return 0;
}
