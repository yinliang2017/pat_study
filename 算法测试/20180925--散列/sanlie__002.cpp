//ɢ��
/*
   �ַ���hash����
   ��һ���ַ������һ����һ�޶�������id������
   ��A-Z����0-25�����26���ơ�
   ������ǵ�Сд��ĸ�������a-z����A-Z����26-51���Сд��ĸ 52����
   ����������֣����0-61,62����
   ����ֱ���д���ǵĺ���

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

   ����BCD3��������дӢ��һ�����ĵĸ�ʽ��
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

