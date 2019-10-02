#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[3] = {1,2,3};

    printf("%d,%d,%d\n", &a[0], &a[1], &a[2]);
    printf("%d, %d\n", &a[0], &a[0] + 1);
    printf("%d, %d\n",&a, &a + 1);

    return 0;
}
