/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月24日 星期日 16时55分56秒
 ************************************************************************/

#include<stdio.h>

#include<string.h>

int main()
{
    char *p ="hello";
    char ar[10] ={ "hello"};
    char ar1[10] = {'h','e','\0','l','o'};
    printf("%d\n",sizeof(p));
    printf("%d\n",strlen(p));
    printf("%d\n",sizeof(ar));
    printf("%d\n",strlen(ar));
    printf("%d\n",sizeof(ar1));
    printf("%d\n",strlen(ar1));
    printf("dddd = %d\n", sizeof("djaskd\0dff"));
    printf("qwwww= %d\n",strlen("liu\0fdd"));
}
