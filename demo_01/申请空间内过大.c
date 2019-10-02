#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main(void)
{
  //  int *p = (int *)malloc(2*1024*1024*1024);
    //此处会报溢出，int型变量表示的大小为:2^-31 -- 2^31 - 1;
   // int *p = (int *)malloc(2u*1024u*1024u*1024u);
    //此处不会报错，unsigned int所表示的大小为2^32;

    int *p = (int *)malloc(40);
    memset(p, 0, 40);//memset 是以字节为单位的
    return 0;
}
