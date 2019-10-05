#include <stdio.h>
#include <stdlib.h>

union Un
{
    int i;
    char c[4];
} u = {134480385};

int main(void)
{
    //方式二：利用union的共用地址特性；4个字节的char和int类ing4个字节共用
    printf("%p, %d\n%p, %d\n%p, %d\n%p, %d\n",&u.c[0],u.c[0],&u.c[1],u.c[1],&u.c[2],u.c[2],&u.c[3],u.c[3]);
    /*
        00402000, 1
        00402001, 2
        00402002, 4
        00402003, 8
    */
    return 0;
}
