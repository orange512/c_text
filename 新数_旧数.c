/*************************************************************************
	> File Name: 新数_旧数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月01日 星期日 16时52分26秒
 ************************************************************************/
//首位交换，3,4位交换，判断新数是否是旧数的4倍
#include<stdio.h>
#include<stdlib.h>
int change(int n)
{
    int tmp = 0;
    tmp = n / 1000 + (n % 10)*1000 + (n / 10)%10 * 100 + (n / 100)%10*10;
    return tmp;
}
int main()
{
    int old = 0;
    int new = 0;
    for(int i = 1000;i<9999;i++)
    {
        old = i;
        new = change(i);
        if( new * 4 == old )
        {
            printf("old = %d new = %d\n",old,new);
            break;
        }   
    }
    return 0;
}

