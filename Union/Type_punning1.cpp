#include<bits/stdc++.h>
using namespace std;

union test
{
    int x;
    float y;
};

int main()
{
    test t;
    t.y=1.1;
    cout<<t.x<<endl;
    return 0;
}