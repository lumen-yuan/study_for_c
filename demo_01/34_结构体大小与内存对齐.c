#include <stdio.h>
#include <stdlib.h>

//#pragma pack(1) �ֶ������ֽڶ���
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
    //24  ������ֽڳ�Ա���뼴double 8�ֽڶ��룻
    //i��j���ڵ�һ��8�ֽڣ�c�ǵڶ���8�ֽڣ�d�������ڵ�����8�ֽڣ���β���룻
    return 0;
}
