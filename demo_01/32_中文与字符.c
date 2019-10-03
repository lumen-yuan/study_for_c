#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //一个汉字用两个字节表示，所以是字符串的形式，外加一个“\0”表示结尾；
    char str[3] = "谢";

    printf("%s\n", str);
    printf("%c%c\n", str[0],str[1]);
    return 0;
}
