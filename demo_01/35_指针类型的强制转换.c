#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a = 12.3;
    int *p = (int *)&a;
    *p = 12;
    *(p+1) = 25;
    printf("info %d, %d\n", *p, *(p+1));
    printf("info %d\n",*(int *)((char *)&a+4));
    //֪ʶ�� ָ������;�����ָ��Ĳ�����ʽ������˵�ڴ�Ĳ�����С��
    return 0;
}
