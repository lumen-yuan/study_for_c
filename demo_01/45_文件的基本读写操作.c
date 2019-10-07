#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
#if 0
    int a = 0;
    FILE *pFile = fopen("E:\\hello.txt", "a");//r只读，w可读可写，a接着写
    if(pFile == NULL)
    {
        printf("open file fail\n");
    }
    char *str = "hello world";
    a = fwrite(str, sizeof(char), strlen(str)+1, pFile);
    fclose(pFile);
    printf("a = %d\n", a);
#endif
    FILE *pFile = fopen("E:\\hello.txt", "r");
    if(pFile == NULL)
    {
        printf("open file fail\n");
    }
    char str[20] = {0};
    int a = fread(str, sizeof(char), 4, pFile);
    printf("a = %d\n", a);
    fclose(pFile);
    //文件的操作本质是系统申请一段空间，然后将flash中的文件复制到这段内存空间中
    //所以处理完成后需要将该空间关闭释放掉，
    //fclost的作用就是关闭文件，更新到文件中，将内存释放掉；
    return 0;
}
