#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void)
{
    int *p = (int *)malloc(sizeof(int));
    int a = sizeof(size_t);//unsigned int == size_t
    /*
        size_t�Ĵ�С�ɱ�����������
        64λ�ı�������Ϊ long unsigned int ;
        32λ�ı�������Ϊ unsigned int ;
    */
    printf("ok, %d\n",a);
    return 0;
}
