/*************************************************************************
	> File Name: high.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月29日 星期五 22时01分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Sn = 100;
    float hn = Sn / 2;
    for(int n = 2 ; n <= 10; n++)
    {
        Sn = Sn + 2*hn;
        hn = hn / 2;
    }
    printf("高度为%f\t 经过%f\n",Sn,hn);
    return 0;
}
