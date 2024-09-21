#include<stdio.h>

int main01()
{
    //打印时,默认输出6位小数点
    //float类型能够保证的精度是7位有效数字
    //double  类型能够保证的精度是15位有效数字
    register float a = 3.1415926456;
    register double b = 3.1415926456;
    int num = 0;
ppg:
    printf("a=%011.8f\n", a);
    printf("a=%.10lf\n", b);
    num++;
    if (num < 100)
    {
        goto ppg;
    }
    system("pause");
    return 0;
}

//数组的初始化
int main()
{

    //int  num[10] = {1,2,3,4,5,6,7,8,9,10};
    //如果数组只初始化部分元素,其他元素被初始化为0
    //int  num[10] = { 1,2 };
    //int num[10] = { 0 };//将数组所有元素初始化为0
    //int  num[10] = {[5]=5};
    //int num[]; err  定义时没有告知有几个元素
    int  num[] = { 1,2,3 };//如果定义时,[]中没有值,这个数组的元素个数由{}里面的元素个数决定
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}