/*************************************************************************
	> File Name: int.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月01日 星期日 17时10分42秒
 ************************************************************************/
//不多于4为的整数，求几位数，分别打印每一位，逆序打印
#include<stdio.h>
#include<stdlib.h>
int judge(int n)
{
    int count = 0;
    while(1)
    {
        if( n / 10 == 0 )
        {
            printf("%d\n",n);
            count++;
            break;
        }
        printf("%d",n % 10);
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int num = 3211;
    printf("%d\n",judge(num));
    return 0;
}
