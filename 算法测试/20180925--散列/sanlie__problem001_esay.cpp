//problem001��
//����N���ַ�����ǡ����λ�ַ������ٸ���M����ѯ�ַ�������ÿ����ѯ�ַ�����N�г��ֵĴ���
//��һ����ά�ַ���������������⣬��������
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
       printf("%s���ֵĴ���Ϊ%d\n",temp,hashtable[x]);
   }
   return 0;
}
//example:
5 2
ABN GHN JJJ NNN MMM
ABN OIK
ABN���ֵĴ���Ϊ1
OIK���ֵĴ���Ϊ0
