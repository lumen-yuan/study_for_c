#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a;
    int b;
    //��һ�� scanf �ַ����ڿ���̨��ʾ
//    scanf("%c\n", &a);
//    printf("%c\n", a);

    //�ڶ��֣�scanf_s����Ҫ˵�������ַ��Ĵ�С��
//    scanf_s("%c", &a, 1);
//    printf("%c\n", a);

    //�����֣�
//    a = getchar();
 //   printf("%c\n", a);

    //������ _getch()����
    /*
    ��ǰ�����ֵĲ��
    ǰ���ǿ���̨-->�ڴ�-->�������ú���ʱ�ڴ�-->����
    Ҳ���Ǳ����룬�������ֱ�Ӵ����ַ����������������ڿ���̨���
    ����ӡ������������ʲô
    */
    while(1)
    {
        a = _getch();
        printf("%c\n",a);
    }

    return 0;
}
