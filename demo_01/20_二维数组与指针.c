#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[2][3] = {{1,2,3},{4,5,6}};

    int (*p)[2][3] = &a;

    for(int i = 0; i< 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d\n", (*p)[i][j]);
        }
    }
    return 0;
}
