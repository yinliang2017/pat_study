#include<iostream>
#include<algorithm>
#include<cstdio>
#include<algorithm>
using namespace std;
//����̰���㷨
const int maxn=110;
int ans=0;
struct interal{
    int x,y;
}T[maxn];
bool cmp(interal a,interal b)
{
    if(a.x!=b.x)
        return a.x>b.x;//�Ȱ���˵�Ӵ�С������
    else
    {
        return a.y<b.y;//�ٰ��Ҷ˵��С����������
    }
}
int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&T [i].x,&T[i].y);
        }
    }
    sort(T,T+n,cmp);
    int ans=1,lastx=T[0].x;
    for(int i=0;i<n;i++)
    {
        if(T[i].y<lastx)
        {
            lastx=T[i].x;
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
