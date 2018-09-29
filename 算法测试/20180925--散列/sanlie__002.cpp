//散列
/*
   字符串hash初步
   将一个字符串变成一串独一无二的数字id来看待
   将A-Z看成0-25，变成26进制。
   如果考虑到小写字母，变成了a-z加上A-Z，用26-51标记小写字母 52进制
   如果考虑数字，变成0-61,62进制
   下面分别来写它们的函数

   A-Z
   int hashfunc(char s[],int len)
   {
        int id=0;
        for(int i=0;i<len;i++)
        {
          id=26*id+(s[i]-'A');
        }
        return id;
   }

   A-Z a-z
   int hashfunc(char s[],int len)
   {
        int id=0;
        for(int i=0;i<len;i++)
        {
          if(s[i]>='A'&&s[i]<='Z')
          {
                id=52*id+(s[i]-'A');
          }
          if(s[i]>='a'&&s[i]<='z')
          {
                id=52*id+(s[i]-'a')+26;
          }
        }
        return id;
   }

   A-Z a-z 0-9
   int hashfunc(char s[],int len)
   {
        int id=0;
        for(int i=0;i<len;i++)
        {
          if(s[i]>='A'&&s[i]<='Z')
          {
                id=62*id+(s[i]-'A');
          }
          if(s[i]>='a'&&s[i]<='z')
          {
                id=62*id+(s[i]-'a')+26;
          }
          if(s[i]>='0'&&s[i]<='9')
          {
                id=62*id+(s[i]-'0')+52;
          }
        }
        return id;
   }

   类似BCD3（三个大写英文一个中文的格式）
    int hashfunc(char s[],int len)
   {
        int id=0;
        for(int i=0;i<len-1;i++)
        {
          id=26*id+(s[i]-'A');
        }
        id=10*id+(s[len-1]-'0');
        return id;
   }



*/
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
const int MAXN=100000+10;
int hashfunc(char s[],int len)
     {
        int id=0;
        for(int i=0;i<len-1;i++)
        {
          id=26*id+(s[i]-'A');
        }
        id=10*id+(s[len-1]-'0');
        return id;
     }
int main()
{
   char s[MAXN];
   int id;
   scanf("%s",s);
   id=hashfunc(s,strlen(s));
   printf("%d",id);
   return 0;
}
//example:
BCD4
7314

