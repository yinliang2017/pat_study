#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main()

{
    cout<<max(4,6)<<" "<<min(3,6)<<max(1,min(2,3))<<endl;
    cout<<abs(-3);//absֻ�����������ľ���ֵ algorithm
    cout<<fabs(-3.1);//fabs�������ڸ����� math
    int x,y;
    x=3;
    y=4;
    swap(x,y);
    cout<<x<<y<<endl;
    string str;
    str="sajjsj";
    reverse(str.begin(),str.end());
    cout<<str<<endl;//reverse��ת�ַ���
    int a[10]={1,2,3};
    do
    {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }while(next_permutation(a,a+3));
    fill(a,a+3,222);
    cout<<a[0]<<a[1]<<a[2]<<endl;



    return 0;
}


