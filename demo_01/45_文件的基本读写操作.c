#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
#if 0
    int a = 0;
    FILE *pFile = fopen("E:\\hello.txt", "a");//rֻ����w�ɶ���д��a����д
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
    //�ļ��Ĳ���������ϵͳ����һ�οռ䣬Ȼ��flash�е��ļ����Ƶ�����ڴ�ռ���
    //���Դ�����ɺ���Ҫ���ÿռ�ر��ͷŵ���
    //fclost�����þ��ǹر��ļ������µ��ļ��У����ڴ��ͷŵ���
    return 0;
}
