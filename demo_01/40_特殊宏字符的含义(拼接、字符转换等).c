#include <stdio.h>
#include <stdlib.h>

//"\"��ʾƴ�����ã�ע�� \ ���治���пո�
#define PRT printf("hello\n");\
            printf("world\n");

//"#"��ʾ������ת��Ϊ�ַ���
#define STR(x) #x

//"##"�������ַ�������ƴ��
#define CON(x,y) #x ## #y
int main(void)
{
    PRT
    printf("%s\n", STR(12344567));
    printf("%s\n", CON(12345,agaggda));
    return 0;
}
