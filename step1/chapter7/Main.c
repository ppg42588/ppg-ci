#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main01()
{
    //指针与字符串
    char  a[] = "helloworld";//定义了一个字符数组,字符数组内容为helloworld\0
    //定义一个指针用来保存数组首元素的地址
    char* p = "helloworld";
    p = a;
    printf("%s\n", p);//%s打印一个字符串,要的是首个字符的地址
    printf("%s\n", p + 2);
    printf("%c\n", *(p + 3));
    *p = 'm';
    printf("%s\n", p);
    //a++
    p++;
    *p = 'o';
    printf("%s\n", p);
    //printf("%d\n",sizeof(a));//11
    //printf("%d\n", sizeof(p));//4
    //printf("%d\n", strlen(a));//
    //printf("%d\n", strlen(p));//
    system("pause");
    return 0;
}

//字符指针数组
//是一个数组,每一个元素是字符指针
int main02()
{
    /*char *p1 = "heihei";
    char *p2 = "haha";
    char *p3 = "xixi";*/
    //char *num[3] = { p1,p2,p3};
    char* num[3] = { "heihei" ,"haha","xixi" };
    //定义一个指针保存num数组首元素的地址   &num[0]  num
    char** p = num;
    for (int i = 0; i < 3; i++)
    {
        //      printf("%s\n",*(p+i));
        printf("%s\n", p[i]);
    }
    printf("%c\n", *(*(p + 1) + 3));// *(p[1]+3)   == p[1][3]
    //for (int i = 0; i < 3; i++)
    //{
    //      printf("%s\n",num[i]); 
    //}
    //printf("%c\n",*num[0]);//
    //printf("%c\n", *(num[1] + 1));
    //printf("%c\n", *(num[2]+2));
    system("pause");
    return 0;
}

//.*.exe    hello   123456
//char *argv[] = { ".*.exe",    "hello"   "123456" };
int main03(int  argc, char* argv[])
{
    /*printf("%d\n",argc);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);
    printf("%s\n", argv[3]);*/
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    system("pause");
    return 0;
}
int main04()
{
    char str1[1024] = "";//wo\0\0\0      wo\0rl
    char str2[128] = "wo rldhello";
    //strcpy( str1 ,  str2);
    strcpy(str1, str2);
    //      printf("%s\n",str1);
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", str1[i]);
    }
    system("pause");
    return 0;
}

int main05()
{
    int  year = 2018;
    int  month = 10;
    int day = 20;
    char buf[1024] = "";
    //printf("year=%d month=%d day=%d \n",year,month,day);
    int len = sprintf(buf, "year=%d month=%d %cday=%d \n", year, month, 0, day);
    //printf("%d\n",strlen(buf));
    printf("len=%d\n", len);
    printf("buf=[%s]", buf);
    system("pause");
    return 0;
}

int main06()
{
    char str[] = "15080015225&bangquan#82263&123456";
    char* p[10] = { NULL };//初始化指针数组元素全部为NULL
    //strtok
    //char *p1 = strtok(str,"#");//在str1中将#切割,返回切割前面的字符串
    //printf("%s\n",p1);
    //char *p2 = strtok(NULL,"#");
    //printf("%s\n",p2);
    //char *p3 = strtok(NULL, "#");
    //printf("%s\n", p3);
    int i = 0;
    do {
        if (i == 0)
            p[i] = strtok(str, "#&");
        else
            p[i] = strtok(NULL, "#&");
        //i++;

    } while (p[i++] != NULL);//p[i] != NULL   i=i+1 如果strtok的返回值等于NULL,代表切割完毕
    i = 0;
    while (p[i] != NULL)
    {
        printf("%s\n", p[i++]);
    }
    system("pause");
    return 0;
}

int main()
{
    //int a[10]
    //申请一个数组,数组有10个元素,每个元素int类型
    int* p = (int*)malloc(sizeof(int) * 10);
    memset(p, 0, sizeof(int) * 10);
    *p = 1000;
    *(p + 5) = 2000;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    system("pause");
    return 0;
}
