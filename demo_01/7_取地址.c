#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;

    printf("a = %d\n",a);
    printf("a�ĵ�ַ��%#p\n", &a);
    scanf("%d", &a);
    printf("a�ĵ�ַ��%#p\n", &a);

//    system("pause");
    return 0;
}
