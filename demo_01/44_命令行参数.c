#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    printf("%s\n",argv[0]);
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);
    /*
        打印结果：将exe拖入到cmd命令框中，输入参数
        C:\Users\xy>E:\code_test_workspace\demo_01\44_命令行参数.exe 123 adb sdfag asdgad de34
        6
        E:\code_test_workspace\demo_01\44_命令行参数.exe
        123
        adb

        C:\Users\xy>
    */
    return 0;
}
