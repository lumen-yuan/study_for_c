#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
/*
    int *p = a; //��ʾ����aΪһ��ָ�����͵ı�����
    int *p = &a;//��ʾaΪһ��������pָ��a���׵�ַ��
    printf("%d,%d\n",p[2],*(p+2));//p[2] = *(p+2) = *(2+p) = 2[p];
*/
/*
    int (*p)[5] = &a; //����ָ�룬��ʾ��Ա��int���ͣ�*p == a;
    printf("%d\n",(*p)[2]);
*/
/*
    (int *)e[4] = {a,b,c,d};//ָ������ ��ʾ��Ա��(int *)���ͣ�
    printf("%d\n", e[1][2]);
*/
    return 0;
}
