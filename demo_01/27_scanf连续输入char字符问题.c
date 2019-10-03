#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//    int a;
//    int b;
//    int c;
    char a,b,c;
#if 0
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    printf("%d, %d, %d\n",a, b, c);
    //对于int型变量可以连续输入多个到缓冲区，用空格隔开；
#endif
    scanf("%c\n", &a);
    scanf("%c\n", &b);
    scanf("%c\n", &c);
    printf("%c, %c, %c\n",a, b, c);
    //不同编译器的处理可能不一样，就是要防止将空格也作为字符输出的清醒；
    return 0;
}
