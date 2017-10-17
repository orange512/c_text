/*************************************************************************
	> File Name: n阶成.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月29日 星期五 22时22分07秒
 ************************************************************************/

#include<stdio.h>
int fun(int n)
{
    if(n == 1)
        return 1;
    int k = n*fun(n-1);
    return k;
}
int main()
{
    int n;
    printf("请输入一个数\n");
    scanf("%d\n",&n);
    printf("%d! = %d\n",n,fun(n));

}
