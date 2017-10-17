/*************************************************************************
	> File Name: 3_5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月29日 星期五 21时55分32秒
 ************************************************************************/
//判断一个数能否被3或5整除
#include<stdio.h>
int zhengchu(int num)
{
    if(num % 5 == 0 || num % 3 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int num = 0;
    printf("请输入一个数:\n");
    scanf("%d",&num);
    if(zhengchu(num))
        printf("可以被整除\n");
    else
        printf("不能被整除\n");
    return 0;
}
