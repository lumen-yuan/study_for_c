#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //һ�������������ֽڱ�ʾ���������ַ�������ʽ�����һ����\0����ʾ��β��
    char str[3] = "л";

    printf("%s\n", str);
    printf("%c%c\n", str[0],str[1]);
    return 0;
}
