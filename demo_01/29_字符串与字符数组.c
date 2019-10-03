#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr1[5] = {'a', 'b','c', 'd', 'e'}; //字符数组
    char arr2[5] = {'a', 'b','c', 'd', '\0'};//字符串

    printf("%s\n", arr1);//字符数组无法直接输出，只能用for循环
    printf("%s\n", arr2);
    puts(arr2);

    return 0;
}
