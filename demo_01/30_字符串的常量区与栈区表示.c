#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr[] = "hello world"; //赋值操作是将常量区的字符串复制到栈区
    char *p = "hello oldxie"; //将常量区的首地址赋给指针p

    //操作的是栈区的内容，没有修改常量区的内容；可行
    arr[2] = 'p';
    printf("%s\n", arr);

    //修改的是常量区的内容，常量是不可修改的，所以是错误的；
    *p = 'a';
    printf("%s\n", arr);
    return 0;
}
