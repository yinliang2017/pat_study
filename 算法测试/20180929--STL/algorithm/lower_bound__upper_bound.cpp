#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8};
    int *at=lower_bound(a,a+10,3);
    cout<<at-a<<endl;
    cout<<upper_bound(a,a+10,3)-a<<endl;
    return 0;
}
