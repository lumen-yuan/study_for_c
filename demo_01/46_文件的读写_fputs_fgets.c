#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    FILE *pFile = fopen("E:\\hello.txt", "r");
    char str[10] = {0};
///    fputs("hello\n", pFile);//�����Զ�����
//    fputs("world\n", pFile);

    fgets(str, 10, pFile);  //���Զ�����
    printf("str = %s\n",str);
    fgets(str, 10, pFile);
    printf("str = %s\n",str);
    fclose(pFile);
    return 0;
}
