/*************************************************************************
	> File Name: add_number.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月26日 星期二 17时39分26秒
 ************************************************************************/
//输入一个三位数，计算每位和
#include<stdio.h>
#include<stdlib.h>

int add_number(int num)
{
    return num%10+(num/10)%10+num/100;
}
int main()
{
    printf("add = %d\n",add_number(123));
}
