#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 124;
    int *p = &a;

//    int *p1 = &p;//����д���Ǵ����

    (int *) *p1 = &p;//����д������ȷ�ģ�*p1��ʾp1��ָ�����ͣ�(int *)��ʾp��ָ�������


    return 0;
}
