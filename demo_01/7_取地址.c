#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;

    printf("a = %d\n",a);
    printf("a的地址：%#p\n", &a);
    scanf("%d", &a);
    printf("a的地址：%#p\n", &a);

//    system("pause");
    return 0;
}
