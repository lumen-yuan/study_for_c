#include <stdio.h>
#include <stdlib.h>

struct Stu
{
    char name[10];
    int age;
    float high;
}stu2;//����ʱҲ��ֱ�Ӷ���һ��������Ϊȫ�ֱ�����

int main(void)
{
    //ȫ�ֽṹ�����Ĭ�ϻ���г�ʼ����ȫΪ0���ֲ����������ʼ����
    //struct Stu stu2;
    printf("info %s, %d, %0.2f\n", (&stu2)->name, stu2.age, stu2.high);

    //1����ͳ�ĳ�ʼ���ṹ����ʽ
    struct Stu stu1 = {"old xie", 25, 1.75};
    printf("info %s, %d, %0.2f\n", (&stu1)->name, stu1.age, stu1.high);

    //2���������ֽṹ��C99��׼
    stu1 = (struct Stu){"xiao xie", 26, 1.72};
    printf("info %s, %d, %0.2f\n", (&stu1)->name, stu1.age, stu1.high);

    //3������ָ��ָ��ṹ��
    //struct Stu *p = &stu1;����ָ��һ���ṹ�壻

    //4����ʼ��һ���ṹ��ָ�������ʹ��mallocһ��Ҫע��ǿת����������ڴ���ʲô���ͣ�
    struct Stu *p = (struct Stu *)malloc(sizeof(struct Stu));
    //p->name = "new xie";//�����д�����ַ�����Ҫstrcpy
    strcpy(p->name, "new xie");
    (*p).age = 27;//һ��ָ��ָ��һ��������*p���������������ע�����ȼ�������Ҫ������
    p->high = 1.68;
    printf("info %s, %d, %0.2f", p->name, p->age, p->high);
    return 0;
}
