#include<typeinfo>
#include<iostream>
using namespace std;

int main()
{
    auto a=10; // Initialize and Declare sath ma karna hoga
    auto b=15.5; // 15.5 is by default double;
    cout<<a<<"\n"<<b<<endl;

    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    return 0;
}