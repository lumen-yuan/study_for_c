#include <stdio.h>
#include <stdlib.h>

struct Stu
{
    char name[10];
    int age;
    float high;
}stu2;//定义时也可直接定义一个变量，为全局变量；

int main(void)
{
    //全局结构体变量默认会进行初始化，全为0，局部变量不会初始化；
    //struct Stu stu2;
    printf("info %s, %d, %0.2f\n", (&stu2)->name, stu2.age, stu2.high);

    //1、传统的初始化结构体形式
    struct Stu stu1 = {"old xie", 25, 1.75};
    printf("info %s, %d, %0.2f\n", (&stu1)->name, stu1.age, stu1.high);

    //2、复合文字结构，C99标准
    stu1 = (struct Stu){"xiao xie", 26, 1.72};
    printf("info %s, %d, %0.2f\n", (&stu1)->name, stu1.age, stu1.high);

    //3、定义指针指向结构体
    //struct Stu *p = &stu1;可以指向一个结构体；

    //4、初始化一个结构体指针变量（使用malloc一定要注意强转，表明这块内存是什么类型）
    struct Stu *p = (struct Stu *)malloc(sizeof(struct Stu));
    //p->name = "new xie";//错误的写法，字符串需要strcpy
    strcpy(p->name, "new xie");
    (*p).age = 27;//一个指针指向一个变量，*p就是这个变量本身；注意优先级，必须要有括号
    p->high = 1.68;
    printf("info %s, %d, %0.2f", p->name, p->age, p->high);
    return 0;
}
