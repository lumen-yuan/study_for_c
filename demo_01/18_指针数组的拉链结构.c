#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[2] = {1,2};
    int b[3] = {3,4,5};
    int c[1] = {6};
    int d[3] = {7,8,9};
    int *e[4] = {a,b,c,d};

    printf("ָ��������������㣺%d\n", e[1][2]);
    //ָ��������������㣺5
    return 0;
}
