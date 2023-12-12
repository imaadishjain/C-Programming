#include<bits/stdc++.h>
using namespace std;

union test
{
    int a;
    float b;
    double c;
    int x[4];
};

int main()
{
    test p;
    cout<<sizeof(p)<<endl;
    return 0;
}