#include <stdio.h>
#include <stdlib.h>

//ע�⣺ȫ��const��������ڳ�������ֻ�ɶ�������д������Ҳû��ͨ���޸��ڴ�ķ�ʽ�޸ģ�
//�ֲ�const�����Ǵ����ջ���ģ�
const int c = 25;

int main(void)
{
    //��һ�֣�const���α���
    //const����������a�ģ������޷��޸�a��ֵ��
    //���ǿ���ͨ���޸�a��Ӧ���ڴ��ַ���ﵽ�޸�a��Ŀ��
#if 0
    const int a = 12;
    int *p = (int *)&a;
    printf("a = %d\n", a);
    *p = 25;
    printf("a = %d\n", a);
#endif

    //�ڶ��֣�����ָ��(const��*pǰ��)�����������ƣ�const�������Ǳ����ñ����������ǲ������ñ���ָ��ĵ�ַ�ռ䣻
    //*p���ܱ䣬����p�ܱ䣻
#if 0
    int a = 23;
    int b = 25;
    const int *p1 = &a;
    printf("%d\n", *p1);
    //*p = 24; ����
    p1 = &b;
    printf("%d\n", *p1);
#endif

    //�����֣�����ָ��(const��pǰ��)
    //p���ܱ䣬*p���Ա䣻
#if 0
    int a = 23;
    int b = 25;
    int * const p = &a;
    printf("%d\n", *p);
    //p = &b;����
    *p = 26;
    printf("%d\n", *p);
#endif
    //�����֣�����ָ��(const��p��*pǰ��)
    //p���ܱ䣬*pҲ�����Ա䣻
    int a = 23;
    int b = 25;
    const int * const p = &a;
    printf("%d\n", *p);
    //p = &b;����
    //*p = 26;����
    printf("%d\n", *p);

    //�ܽ᣺const����ʲô��ʲô�Ͳ��ܸı䣻
    return 0;
}
