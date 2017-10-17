/*************************************************************************
	> File Name: output.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月26日 星期二 17时45分15秒
 ************************************************************************/
//求y值
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double output(double x)
{
    if(x >= 0)
        return (sin(x)+cos(x))/2;
    else
        return (sin(x)-cos(x))/2;
}


int main()
{
    double y = output(0.5);
    printf("y = %lf\n",y);
}
