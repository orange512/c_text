/*************************************************************************
	> File Name: English_word_sys.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月19日 星期日 20时31分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define SIZE 50           
void foresee();          
int intest();             
void test2(int n);        
void testchinese();       
void translation();       
void EtoC();             
void CtoE();             
void word_add();          
void word_delete();       
struct words
{
    char eword[20];
    char cixing[10];
    char chinese[50];
};                        
int x;
struct words bank[SIZE]={
    {"nuclear","a.","核子的,核能的"},{"according","ad.","依照"},{"apple","n.","苹果 "},{"tool","n.","工具 "},{"confidence","n.","信心,信任"},{"miss","n.","遇见 "},{"economy","n.","经济,节约,节省"},{"match","n.","比赛 "},{"global","a.","全球的"},{"helpful","a.","给予帮助的,有用的"},{"impose","vt.","把……加强,征"},{"long","ad.","长的"},{"mystery","n.","神秘,神秘的人或事"},{"obtain","v.","获得,通用"},{"occasion","n.","场合,时刻"},{"particularly","ad.","尤其,特别"},{"patient","a.","忍耐的,有耐心的"},{"railway","n.","铁路"},{"reaction","n.","反应,反作用"},{"remote","a.","遥远的,偏僻的"},{"selection","n.","选择,挑选"},{"setting","n.","环境,背景"},{"shrink","v.","起皱,收缩"},{"translation","n.","翻译,译文"},{"troublesome","a.","令人烦恼的,麻烦的"}
    ,{"undergo","vt.","经历,经受"},{"unlike","prep.","不像"},{"volunteer","n.","志愿者"},{"virtue","n.","善,美德"},{"round","n.","范围 "},{"basketball","v.","篮球 "},{"football","n.","足球 "},{"abstract","a.","抽象的,抽象派的"},{"water","n.","水"},{"biology","n.","生物学,生态学"},{"note","n.","笔记 "},{"debate","n.,vi.","争论,辩论"},{"carry","vt.","携带"}
};

void test2(int n)         
{
    switch(n)
    {case 0:
     case 1:
     case 2:
     case 3:printf("\n\n\n\t\t\t正确个数：%d \n\n\t\t\t努力！",n);getchar();break;
     case 4:
     case 5:
     case 6:printf("\n\n\n\t\t\t正确个数：%d \n\n\t\t\t不错！",n);getchar();break;
     case 7:
     case 8:
     case 9:
     case 10:printf("\n\n\n\t\t\t正确个数：%d \nGreat！棒！",n);getchar();break;
     default:printf("系统故障!");getchar();
    }

}
int intest()              
{
    srand( (unsigned)time( NULL  )  ); 
    return (rand() %29+1);

}
void testchinese()        
{
    int i,j=0,a;
    char word[30];
    for(i=0;i<10;i++)
    {   
        a=intest();
        printf("%s\n请输入对应的单词：",bank[a].chinese);
        scanf("%s",word);
        if(strcmp(bank[a].eword,word)==0)j++;
    }
    test2(j);

}
void foresee()            
{
    int a;char ch;
    puts("单词           词性        意思");
    for(a=0;a<SIZE;a++)
    printf("%-16s %-8s %-20s\n",bank[a].eword,bank[a].cixing,bank[a].chinese);
    fflush(stdin);
    ch=getchar();
    printf("是否要运行测试功能？N/Y:");
    ch=getchar();
    if(ch=='y'||ch=='Y')
    {
        testchinese();
    }

}
void EtoC()               
{
    char word[20];
    int i=0;
    puts("\n请输入您要查询的单词：");
    scanf("%s",word);
    while(strcmp(bank[i].eword,word)!=0&&i<SIZE)i++;
    if(i<SIZE)printf("\n该单词的中文意思为：%s\n",bank[i].chinese);
    else puts("抱歉，没有查到您要找的单词。");
}
void CtoE()               
{
    char chinese[20];
    int i=0;
    puts("\n请输入您要查询的中文：");
    scanf("%s",chinese);
    while(strcmp(bank[i].chinese,chinese)!=0&&i<SIZE)i++;
    if(i<SIZE)printf("\n该单词的英文为：%s\n",bank[i].eword);
    else puts("抱歉，没有查到您要找的单词。\n");
}
void translation()        
{
    int a;
    while(a!=3)
    {puts("请选择：");
     puts("1.英译汉");
     puts("2.汉译英");
     puts("3.返回上级菜单");
     scanf("%d",&a);
     switch(a)
     {
         case 1:EtoC();break;
         case 2:CtoE();break;
         case 3:break;

     }}

}
void word_add()           
{
    char ch;
    do
    {
        puts("请输入您要添加的单词：");
        scanf("%s",bank[x].eword);
        puts("请输入该词的词性：");
        scanf("%s",bank[x].cixing);
        puts("请输入该词的中文意思：");
        scanf("%s",bank[x].chinese);
        puts("您是否还要继续？Y/N");
        fflush(stdin);
        ch=getchar();
        x++;

    }while(ch=='Y'||ch=='y');getchar();

}
void word_delete()        
{
    char word[20];int i=0;
    printf("请输入您要删除的单词：");
    scanf("%s",word);
    while(strcmp(bank[i].eword,word)!=0&&i<SIZE)i++;
    if(i<SIZE){
        for(;i<SIZE;i++)
        bank[i]=bank[i+1];
        puts("删除成功！");
    }
    else puts("没有找到对应的单词！");
}
int main()                
{
    int m;
    puts("***************欢迎使用背单词系统**************\n\n");
    while(m!=5)
    {
        puts("\n请选择您需要的服务：");
        puts("\t1.单词预览");
        puts("\t2.英汉互译");
        puts("\t3.单词添加");
        puts("\t4.单词删除");
        puts("\t5.退出系统");
        scanf("%d",&m);
        switch(m)
        {
            case 1:foresee();break;
            case 2:translation();break;
            case 3:word_add();break;
            case 4:word_delete();break;
            case 5:return 0;
            default:puts("您的输入有误！");

        }

    }

}

