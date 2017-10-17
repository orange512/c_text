/*************************************************************************
	> File Name: 分数序列.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月30日 星期六 09时16分35秒
 ************************************************************************/

#include<stdio.h>
//求2/1+3/2+5/3+8/5+13/8+21/3....
double Fib(int n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else 
        return Fib(n-1)+Fib(n-2);
}
int main()
{
    double total = 0.0;
    for(int i = 1;i < 20;i++)
    {
        total += Fib(i+1)/Fib(i);
    }
    printf("%lf\n",total);

}
