#include <stdio.h>
#include <stdlib.h>

void fun(int a[][3],int hang, int lie) //1、常规写法；此种写法二维中的3不能省略
{
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < lie; j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}

void fun1(int *p,int hang, int lie) //2、首地址传入写法
{
    for(int i = 0; i < hang*lie; i++)
        {
            printf("%d\n",p[i]);
        }

}

void fun2(int (*p)[3],int hang, int lie)//3、一维数组指针写法；和第一种类似，数组就是指针，后面的3不能省略
{
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < lie; j++)
        {
            printf("%d\n",p[i][j]);
        }
    }

}
void fun3(int (*p)[2][3],int hang, int lie)//4、传递的是二维数组指针；后面的3不能省略
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
    //fun(a,2,3); //传递的是数组
    //fun1(&a[0][0],2,3);//传递的是数组连续空间的首地址
    //fun2(p,2,3);//传递的是数组指针；
    fun3(&a,2,3);
    return 0;
}
