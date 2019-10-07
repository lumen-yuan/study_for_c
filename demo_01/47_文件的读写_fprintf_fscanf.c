#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    FILE *pFile = fopen("E:\\hello.txt", "r");
//    fprintf(pFile, "%d %s %.2lf",12,"hello",12.34);
    int a = 0;
    char str[20] = {0};
    double d = 0.0;
    fscanf(pFile, "%d %s %lf", &a, &str, &d);
    printf("%d, %s, %lf", a, str, d);

    fclose(pFile);
    return 0;
}
