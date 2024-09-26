#include<stdio.h>

//万能指针
int main()
{
    //void b; 不可以定义void类型的变量,因为编译器不知道给变量分配多大的空间
    //但是可以定义void *类型,因为指针都是4个字节
    int  a = 10;
    short b = 10;
    void* p = (void*)&a;//万能指针可以保存任意的地址
    void* q = &b;
    //printf("%d\n", *p);//err  p是void*,不知道取几个字节的大小
    printf("%d\n", *(int*)p);// *(  (int *)地址)
    system("pause");
    return 0;
}

