#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
//n�ʺ�����
//���û��ݷ�������ǰ����߽�������ʾ����
const int maxn=20;
int n;
bool hashtable[maxn]={false};
int p[maxn];
int counte=0;
void generateA(int index)
{
    if(index==n+1)
    {
      for(int i=1;i<n;i++)
            {
                printf("%d ",p[i]);
            }
      counte++;
      printf("\n");
    }
    for(int x=1;x<=n;x++)
    {
        if(hashtable[x]==false)
        {
            bool flag=true;
            for(int st=1;st<index;st++)
            {
                if(abs(st-index)==abs(x-p[st]))//����index�лʺ�Ϊx������st�еĻʺ��Ϊp[st]
                   {
                       flag=false;
                       break;
                   }
            }
            if(flag)
            {
                p[index]=x;
                hashtable[x]=true;
                generateA(index+1);
                hashtable[x]=false;
            }
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

