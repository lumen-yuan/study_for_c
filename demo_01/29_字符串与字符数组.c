#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr1[5] = {'a', 'b','c', 'd', 'e'}; //�ַ�����
    char arr2[5] = {'a', 'b','c', 'd', '\0'};//�ַ���

    printf("%s\n", arr1);//�ַ������޷�ֱ�������ֻ����forѭ��
    printf("%s\n", arr2);
    puts(arr2);

    return 0;
}
