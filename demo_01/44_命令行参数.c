#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    printf("%s\n",argv[0]);
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);
    /*
        ��ӡ�������exe���뵽cmd������У��������
        C:\Users\xy>E:\code_test_workspace\demo_01\44_�����в���.exe 123 adb sdfag asdgad de34
        6
        E:\code_test_workspace\demo_01\44_�����в���.exe
        123
        adb

        C:\Users\xy>
    */
    return 0;
}
