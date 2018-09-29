//散列
/*
什么叫散列呢
  就是用空间来换取时间的办法，通过构建hashtable来将从M个数中找出N个数是否出现的情况改成
  令hashtable[100000+10]={false},如果出现了就改为true的方法。
    （1）用bool来记录出现情况，用int来记录出现次数
    （2）散列就是元素通过一个函数转换为整数，使得该证整数尽可能唯一的表达这个元素来使用的过程
    （3）key为整数时：
                线性探查法：不断加一
                平方探查法：+1^2，-1^2，+2^2，-2^2等
                链地址法:拉链法，用单链表来解决问题，具体见7.3小节
*/
#include<iostream>
#include<cstdio>
using namespace std;
const int MAXN=100000+10;

int main()
{

/*--------------------------------------------------记录出现情况时
  bool hashtable[MAXN]={false};
  int m,n,x;
  scanf("%d%d",&m,&n);
  for(int i=0;i<m;i++)
  {
      scanf("%d",&x);
      hashtable[x]=true;
  }
  for(int i=0;i<n;i++)
  {
      scanf("%d",&x);
      if(hashtable[x]==true)
      {
          printf("Yes\n");
      }
      else
      {
          printf("No\n");
      }
  }
  return 0;
  //example：4 2
    2 8 9 0
    8 0
    Yes
    Yes
---------------------------------------------------------------------------*/

/*------------------------------------------------------------------记录出现次数时
  int hashtable[MAXN]={0};
  int m,n,x;
  scanf("%d%d",&m,&n);
  for(int i=0;i<m;i++)
  {
      scanf("%d",&x);
      hashtable[x]++;
  }
  for(int i=0;i<n;i++)
  {
      scanf("%d",&x);
      printf("%d\n",hashtable[x]);
  }
  return 0;
}
//example:
5  2
2 2 3 4 5
2 6
2
0
----------------------------------------------------------------------------*/

