#include<stdio.h>

int main01()
{
    char* p1;
    short* p2;
    int* p3;
    int** p4;//p4也是一个指针变量  int **
    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(p2));
    printf("%d\n", sizeof(p3));
    printf("%d\n", sizeof(p4));
    system("pause");
    return 0;
}

int main()
{
    int  num = 0x01020304;
    char* p1 = (char*)&num;//int *
    short* p2 = (short*)&num;
    int* p3 = &num;
    //通过*取指针变量所指向那块空间内容时,取的内存的宽度和指针变量本身的类型有关
    printf("%x\n", *p1);
    printf("%x\n", *p2);
    printf("%x\n", *p3);
    system("pause");
    return 0;
}