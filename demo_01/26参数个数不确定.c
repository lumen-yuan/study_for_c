#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void fun(int a, ...)//a����ָ��δ֪�����ĸ���
{
    va_list vp; //����������飻
    va_start(vp,a); //������װ���������
    printf("%d\n",va_arg(vp,int)); //va_arg����ȡ���ݣ���ͷ��ʼ��int��ʾ��������
    printf("%d\n",va_arg(vp,int));
    printf("%d\n",va_arg(vp,int));
}
int main(void)
{
    fun(3,12,34,56);
    return 0;
}
