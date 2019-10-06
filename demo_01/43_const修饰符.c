#include <stdio.h>
#include <stdlib.h>

//注意：全局const变量存放在常量区，只可读，不可写，所以也没法通过修改内存的方式修改；
//局部const变量是存放在栈区的；
const int c = 25;

int main(void)
{
    //第一种：const修饰变量
    //const是用来修饰a的，所以无法修改a的值，
    //但是可以通过修改a对应的内存地址来达到修改a的目的
#if 0
    const int a = 12;
    int *p = (int *)&a;
    printf("a = %d\n", a);
    *p = 25;
    printf("a = %d\n", a);
#endif

    //第二种：修饰指针(const在*p前面)，和上面类似，const单纯的是保护该变量本身，但是不保护该变量指向的地址空间；
    //*p不能变，但是p能变；
#if 0
    int a = 23;
    int b = 25;
    const int *p1 = &a;
    printf("%d\n", *p1);
    //*p = 24; 错误
    p1 = &b;
    printf("%d\n", *p1);
#endif

    //第三种：修饰指针(const在p前面)
    //p不能变，*p可以变；
#if 0
    int a = 23;
    int b = 25;
    int * const p = &a;
    printf("%d\n", *p);
    //p = &b;错误；
    *p = 26;
    printf("%d\n", *p);
#endif
    //第四种：修饰指针(const在p和*p前面)
    //p不能变，*p也不可以变；
    int a = 23;
    int b = 25;
    const int * const p = &a;
    printf("%d\n", *p);
    //p = &b;错误；
    //*p = 26;错误
    printf("%d\n", *p);

    //总结：const修饰什么，什么就不能改变；
    return 0;
}
