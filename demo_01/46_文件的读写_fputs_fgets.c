#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    FILE *pFile = fopen("E:\\hello.txt", "r");
    char str[10] = {0};
///    fputs("hello\n", pFile);//不会自动换行
//    fputs("world\n", pFile);

    fgets(str, 10, pFile);  //会自动换行
    printf("str = %s\n",str);
    fgets(str, 10, pFile);
    printf("str = %s\n",str);
    fclose(pFile);
    return 0;
}
