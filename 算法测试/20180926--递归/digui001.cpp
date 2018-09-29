#include<iostream>
#include<cstdio>
using namespace std;
//È«ÅÅÁĞ
const int MAXN=20;
int n;
bool hashtable[MAXN]={false};
int p[MAXN];
void generateP(int index)
{
    if(index==n+1)
    {
        {
            for(int i=1;i<=n;i++)
            printf("%d ",p[i]);
        }
        printf("\n");
        return ;
    }
    for(int x=1;x<=n;x++)
    {
        if(hashtable[x]==false)
            {
                hashtable[x]=true;
                p[index]=x;
                generateP(index+1);
                hashtable[x]=false;
            }
    }
}
int main()
{
    n=4;
    generateP(1);
    return 0;

}
example£º
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1


