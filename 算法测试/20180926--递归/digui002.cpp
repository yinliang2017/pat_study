#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
//n�ʺ�����
const int maxn=20;
int n;
bool hashtable[maxn]={false};
int p[maxn];
int counte=0;
bool flag=true;
void generateA(int index)
{
    if(index==n+1)
    {
        flag=true;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(abs(i-j)==abs(p[i]-p[j]))
                    {
                        flag=false;
                    }
            }
        }
        if(flag==true)
        {
            for(int i=1;i<n;i++)
            {
                printf("%d ",p[i]);
            }
            counte++;
            printf("\n");
        }
    }
    for(int x=1;x<=n;x++)
    {
        if(hashtable[x]==false)
        {
            p[index]=x;
            hashtable[x]=true;
            generateA(index+1);
            hashtable[x]=false;
        }
    }
}
int main()
{
    printf("������ʺ����Ŀ��С\n");
    scanf("%d",&n);
    generateA(1);
    printf("%d",counte);
    return 0;
}
