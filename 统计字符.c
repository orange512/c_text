/*************************************************************************
	> File Name: 统计字符.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月30日 星期六 08时50分27秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int count1 = 0;//统计英文字母
    int count2 = 0;//统计数字
    int count3 = 0;//统计空格
    int count4 = 0;//其他
    char ch;
    while((ch = getchar()) != '\n')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            count1++;
        }
        else if (ch >= 'A' && ch <= 'Z')
            count1++;
        else if (ch >= '1' && ch <= '9')
            count2++;
        else if(ch == ' ')
            count3++;
        else
            count4++;
    }
    printf("英文:%d\t 数字%d\t空格%d\t其他字符%d\n",count1,count2,count3,count4);
    return 0;
}
