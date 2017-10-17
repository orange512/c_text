/*************************************************************************
	> File Name: xunhuan.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月30日 星期六 08时59分02秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
//循环求2^0+2^1+2^3....
int main()
{
    int total = 1;
    for(int i = 0; i < 64;i++)
    {
        total = total +  2*total;
    }
    printf("total = %d\n",total);
    return 0;
}
