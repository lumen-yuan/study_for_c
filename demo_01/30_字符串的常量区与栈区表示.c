#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr[] = "hello world"; //��ֵ�����ǽ����������ַ������Ƶ�ջ��
    char *p = "hello oldxie"; //�����������׵�ַ����ָ��p

    //��������ջ�������ݣ�û���޸ĳ����������ݣ�����
    arr[2] = 'p';
    printf("%s\n", arr);

    //�޸ĵ��ǳ����������ݣ������ǲ����޸ĵģ������Ǵ���ģ�
    *p = 'a';
    printf("%s\n", arr);
    return 0;
}
