#include <stdio.h>
#include <stdlib.h>

//"\"表示拼接作用，注意 \ 后面不能有空格
#define PRT printf("hello\n");\
            printf("world\n");

//"#"表示将变量转换为字符串
#define STR(x) #x

//"##"将两个字符串进行拼接
#define CON(x,y) #x ## #y
int main(void)
{
    PRT
    printf("%s\n", STR(12344567));
    printf("%s\n", CON(12345,agaggda));
    return 0;
}
