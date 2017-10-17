/*************************************************************************
	> File Name: judge.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月26日 星期二 17时50分37秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//判断大小写英文字母
char* fun(char a)
{
    static char buff[20];
    if(a >= 'a' && a <= 'z' )
    {
        sprintf(buff,"%c",a-32);
        return buff;
    }
    else if(a >= 'A' && a <= 'Z')
    {
        sprintf(buff,"%c",a+32);
        return buff;
    }

    else if(a == ' ')
        return "space";
    else
        return "other";
}
int main()
{
    char buf;
    printf("请输入字符\n");
    buf = getchar();
    printf("%s\n",fun(buf));
}
