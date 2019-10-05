#include <stdio.h>
#include <stdlib.h>

#define sum 1+2*3
#define print printf("%d\n",sum);
//由于只是单纯替换，所以一定要加括号，避免运算歧义
#define PRINT(x) printf("%d\n",(x)*2)
//标准写法
#define SUM(x,y) ((x)+(y))
int main(void)
{
    printf("%d\n",sum);
    //defin只是在预编译是单纯的替换，不会做任何处理或计算
    print
    PRINT(2+2);
    return 0;
}
