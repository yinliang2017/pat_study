#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
//这个文档包括我选择说学会的所有sort函数
using namespace std;
bool cmp(string a,string b)
{
    return a.length()<b.length();
}
//struct node
//{
//    int x,y;
//}ss[10];
//bool cmp(node a, node b)
//{
//    if(a.x!=b.x)
//    {
//        return a.x<b.x;
//    }
//    else
//        return a.y<b.y;
//}
// bool cmp(int a,int b)
// {
//
//     return a>b;//大的放在前面
// }
int main()
{
    int a[10]={1,2,3,4,6,7,8};
    sort(a,a+4);
    cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
    //比较函数的写法

//    //1.基本数据类型数组的排序
//    sort(a,a+4,cmp);
//    cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
  string str[3]={"asxd","sad","sd"};
  sort(str,str+3,cmp);
  cout<<str[0]<<" "<<str[1]<<" "<<str[3]<<endl;




//    //2.结构体数组的排序
//    ss[0].x=4;
//    ss[0].y=6;
//    ss[1].x=4;
//    ss[1].y=5;
//    ss[2].x=5;
//    ss[2].y=7;
//    sort(ss,ss+3,cmp);
//    for(int i=0;i<3;i++)
//    {
//        cout<<ss[i].x<<" "<<ss[i].y<<endl;
//    }
//





    //3.容器的排序





    return 0;
}
