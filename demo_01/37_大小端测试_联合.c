#include <stdio.h>
#include <stdlib.h>

union Un
{
    int i;
    char c[4];
} u = {134480385};

int main(void)
{
    //��ʽ��������union�Ĺ��õ�ַ���ԣ�4���ֽڵ�char��int��ing4���ֽڹ���
    printf("%p, %d\n%p, %d\n%p, %d\n%p, %d\n",&u.c[0],u.c[0],&u.c[1],u.c[1],&u.c[2],u.c[2],&u.c[3],u.c[3]);
    /*
        00402000, 1
        00402001, 2
        00402002, 4
        00402003, 8
    */
    return 0;
}
