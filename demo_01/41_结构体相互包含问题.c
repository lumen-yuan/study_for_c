#include <stdio.h>
#include <stdlib.h>

struct AA
{
 //   struct BB b1;
    struct BB* b1;
    int a;
};

struct BB
{
    struct AA* a1;
    int a;
};
int main (void)
{

    return 0;
}

//���뱨���Ҳ���b1��ʵ�壻��Ϊ���ڴ�����ʱ��֪�����AA�ṹ��Ĵ�С��
/*
    ��һ�ṹ�岻���໥Ƕ��ʵ��������Ƕ��ָ�룻
    �ڶ��ṹ�� ���ܰ��� �Լ���ʵ��
*/
