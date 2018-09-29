/*
题目描述
先输入一组数，然后输入其分组，按照分组统计出现次数并输出，参见样例。

输入
输入第一行表示样例数m，对于每个样例，第一行为数的个数n，接下来两行分别有n个数，第一行有n个数，第二行的n个数分别对应上一行每个数的分组，n不超过100。

输出
输出m行，格式参见样例，按从小到大排。

样例输入
1
7
3 2 3 8 8 2 3
1 2 3 2 1 3 1
样例输出
1={2=0,3=2,8=1}
2={2=1,3=0,8=1}
3={2=1,3=1,8=0}
*/
#include<iostream>
#include<cstdio>
#include<string.h>
int MAXN=120;
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        int s[MAXN]={};
        int t[MAXN]={};
        int k[MAXN][MAXN]={};
        for(int j=0;j<m;j++)
            scanf("%d",&s[j]);
        for(int j=0;j<m;j++)
            {
                scanf("%d",&t[j]);

            }






    }

    return 0;
}
