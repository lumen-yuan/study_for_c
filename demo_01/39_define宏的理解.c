#include <stdio.h>
#include <stdlib.h>

#define sum 1+2*3
#define print printf("%d\n",sum);
//����ֻ�ǵ����滻������һ��Ҫ�����ţ�������������
#define PRINT(x) printf("%d\n",(x)*2)
//��׼д��
#define SUM(x,y) ((x)+(y))
int main(void)
{
    printf("%d\n",sum);
    //definֻ����Ԥ�����ǵ������滻���������κδ�������
    print
    PRINT(2+2);
    return 0;
}
