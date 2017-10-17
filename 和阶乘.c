/*************************************************************************
	> File Name: 和阶乘.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月30日 星期六 09时08分02秒
 ************************************************************************/

#include<stdio.h>
//计算前20的阶乘和
int fun(int n)
{
    if(n == 1)
        return 1;
    else
        return n*fun(n-1);
}
int main()
{
    int total = 0;
    for(int i = 1; i < 21;i++)
    {
        total += fun(i);
    }
    printf("%d\n",total);

}
