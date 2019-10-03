#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a;
    int b;
    //第一种 scanf 字符会在控制台显示
//    scanf("%c\n", &a);
//    printf("%c\n", a);

    //第二种，scanf_s，需要说明输入字符的大小；
//    scanf_s("%c", &a, 1);
//    printf("%c\n", a);

    //第三种，
//    a = getchar();
 //   printf("%c\n", a);

    //第四种 _getch()函数
    /*
    与前面三种的差别，
    前面是控制台-->内存-->变量；该函数时内存-->变量
    也就是边输入，边输出（直接存入字符缓冲区），不会在控制台输出
    不打印看不到输入了什么
    */
    while(1)
    {
        a = _getch();
        printf("%c\n",a);
    }

    return 0;
}
