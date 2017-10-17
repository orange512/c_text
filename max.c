/*************************************************************************
	> File Name: max.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月26日 星期二 18时46分39秒
 ************************************************************************/
//三个数比较大小
#include<stdio.h>
double max(double a,double b,double c)
{
    double max = a;
    if(b - max > 0.0000001)
        max = a;
    if(c - max > 0.0000001)
        max = c;
    return max;
}
int main()
{
    double a,b,c;
    printf("请输入三个数\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("max = %lf\n",max(a,b,c));
    return 0;
}
