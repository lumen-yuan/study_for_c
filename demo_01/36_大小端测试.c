#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //方式一：强制转换
    int a = 134480385; //0000 1000  0000 0100  0000 0010  0000 0001‬
    int temp;
    char *p = &a;
//    printf("%p, %d\n%p, %d\n%p, %d\n%p, %d\n",p,*p,p+1,*(p+1),p+2,*(p+2),p+3,*(p+3));
    //小端存储结果
    printf("%p, %d\n%p, %d\n%p, %d\n%p, %d\n",&p[0],p[0],&p[1],p[1],&p[2],p[2],&p[3],p[3]);
    /*
        0060FEE8, 1
        0060FEE9, 2
        0060FEEA, 4
        0060FEEB, 8
    */
    //大小端转换
    temp = p[0];
    p[0] = p[3];
    p[3] = temp;

    temp = p[1];
    p[1] = p[2];
    p[2] = temp;
    //大端存储结果；
    printf("%p, %d\n%p, %d\n%p, %d\n%p, %d\n",&p[0],p[0],&p[1],p[1],&p[2],p[2],&p[3],p[3]);
    /*
    0060FEE4, 8
    0060FEE5, 4
    0060FEE6, 2
    0060FEE7, 1
    */
    return 0;
}
