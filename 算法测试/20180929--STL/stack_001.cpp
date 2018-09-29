#include<iostream>
#include<queue>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main()
{
    stack <int> name;
    name.push(1);
    cout<<name.top()<<endl;
    name.push(2);
    name.push(4);
    cout<<name.top()<<endl;
    name.pop();
    cout<<name.size()<<endl;
    if(name.empty()==1)
        cout<<"¿ÕÕ»";


    return 0;

}

