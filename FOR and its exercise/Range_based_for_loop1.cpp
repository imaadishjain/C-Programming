#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[]={10,20,30};

  for(int x: arr)
  {
    x=x*2; //   x is just the copy of the element
  }
  for(int x:arr)
  {
    cout<<x<<" "; 
  }
  cout<<endl;
  string arr1[]={"ABC","XYZ"};

  for(string s: arr1)
  {
    cout<<s<<" ";
  }
  return 0;
}