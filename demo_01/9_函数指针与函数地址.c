#include <stdio.h>
#include <stdlib.h>

int fun(int a)
{
    printf("%d\n",a);
    return 0;
}
int main(void)
{
    int (*p)(int) = fun;
    //��β鿴���������ͣ�ȥ����������Ϊ�������ͣ��˴���*pҪ��(),��ʾ����ָ�룻
    p(2);
    return 0;
}
