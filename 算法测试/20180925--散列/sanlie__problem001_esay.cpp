//problem001：
//给出N个字符串（恰好三位字符），再给出M个查询字符串，求每个查询字符串在N中出现的次数
//用一个二维字符串数组来解决问题，代码如下
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
const int MAXN=100000+10;
char s[MAXN][4];
int hashtable[MAXN]={0};
int hashfunc(char s[],int len)
     {
        int id=0;
        for(int i=0;i<len;i++)
        {
          id=26*id+(s[i]-'A');
        }
        return id;
     }
int main()
{
   int n,m,x;
   scanf("%d%d",&n,&m);
   char temp[4]={0};
   for(int i=0;i<n;i++)
   {
       scanf("%s",s[i]);
       x=hashfunc(s[i],3);
       hashtable[x]++;
   }
   for(int i=0;i<m;i++)
   {
       scanf("%s",temp);
       x=hashfunc(temp,3);
       printf("%s出现的次数为%d\n",temp,hashtable[x]);
   }
   return 0;
}
//example:
5 2
ABN GHN JJJ NNN MMM
ABN OIK
ABN出现的次数为1
OIK出现的次数为0
