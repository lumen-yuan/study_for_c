#include <stdio.h>
#include <stdlib.h>

void fun(int a[][3],int hang, int lie) //1������д��������д����ά�е�3����ʡ��
{
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < lie; j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}

void fun1(int *p,int hang, int lie) //2���׵�ַ����д��
{
    for(int i = 0; i < hang*lie; i++)
        {
            printf("%d\n",p[i]);
        }

}

void fun2(int (*p)[3],int hang, int lie)//3��һά����ָ��д�����͵�һ�����ƣ��������ָ�룬�����3����ʡ��
{
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < lie; j++)
        {
            printf("%d\n",p[i][j]);
        }
    }

}
void fun3(int (*p)[2][3],int hang, int lie)//4�����ݵ��Ƕ�ά����ָ�룻�����3����ʡ��
{
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < lie; j++)
        {
            printf("%d\n",(*p)[i][j]);
        }
    }

}
int main(void)
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3] = &a;
    //fun(a,2,3); //���ݵ�������
    //fun1(&a[0][0],2,3);//���ݵ������������ռ���׵�ַ
    //fun2(p,2,3);//���ݵ�������ָ�룻
    fun3(&a,2,3);
    return 0;
}
