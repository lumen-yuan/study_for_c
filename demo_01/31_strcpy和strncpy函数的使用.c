#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "xie";

    printf("%s\n",str1);
    //将str2复制到str1，或者说是完全替换，
    //需要注意的就是str1的长度要大于等于str2的长度；
//    strcpy(str1, str2);
//    printf("%s\n",str1);
    //结果：hello xie

    //可以指定复制的长度
    //复制3个字节结果为 xielo;
    strncpy(str1, str2, 3);
    printf("%s\n",str1);
    //复制4个自己结果为：xie
    strncpy(str1, str2, 4);
    printf("%s\n",str1);
    return 0;
}
