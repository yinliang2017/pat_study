#include<iostream>
#include<queue>
#include<cstdio>
#include<string>
using namespace std;

struct fruit
{
    int price;
    string name;
    friend bool operator<(fruit f1,fruit f2)
    {

        return f1.price<f2.price;//重载小于号
    }
}
f1,f2,f3;
int main()

{
    priority_queue<fruit> q;
    f1.name="猴子";
    f1.price=3;
    f2.name="梨子";
    f2.price=4;
    f3.name="苹果";
    f3.price=5;
    q.push(f1);
    q.push(f2);
    q.push(f3);
    cout<<q.top().name<<"  "<<q.top().price<<endl;


//    priority_queue <int,vector<int>,greater<int> > name;
//    name.push(2);
//    name.push(4);
//    name.push(7);
//    printf("%d",name.top());


    return 0;
}
