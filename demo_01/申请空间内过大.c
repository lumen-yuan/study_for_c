#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main(void)
{
  //  int *p = (int *)malloc(2*1024*1024*1024);
    //�˴��ᱨ�����int�ͱ�����ʾ�Ĵ�СΪ:2^-31 -- 2^31 - 1;
   // int *p = (int *)malloc(2u*1024u*1024u*1024u);
    //�˴����ᱨ��unsigned int����ʾ�Ĵ�СΪ2^32;

    int *p = (int *)malloc(40);
    memset(p, 0, 40);//memset �����ֽ�Ϊ��λ��
    return 0;
}
