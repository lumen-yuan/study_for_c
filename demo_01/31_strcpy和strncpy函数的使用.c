#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "xie";

    printf("%s\n",str1);
    //��str2���Ƶ�str1������˵����ȫ�滻��
    //��Ҫע��ľ���str1�ĳ���Ҫ���ڵ���str2�ĳ��ȣ�
//    strcpy(str1, str2);
//    printf("%s\n",str1);
    //�����hello xie

    //����ָ�����Ƶĳ���
    //����3���ֽڽ��Ϊ xielo;
    strncpy(str1, str2, 3);
    printf("%s\n",str1);
    //����4���Լ����Ϊ��xie
    strncpy(str1, str2, 4);
    printf("%s\n",str1);
    return 0;
}
