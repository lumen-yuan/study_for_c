#include <stdio.h>
#include <stdlib.h>

//#pragma pack(1) 手动配置字节对齐
struct Stu
{
    char i;
    int j;
    double c;
    float d;
};
int main(void)
{
    struct Stu stu1;
    printf("size : %d", sizeof(stu1));
    //24  以最大字节成员对齐即double 8字节对齐；
    //i和j存在第一个8字节，c是第二个8字节，d单独放在第三个8字节，结尾补齐；
    return 0;
}
