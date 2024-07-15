#include<iostream>
#include<math.h>
using namespace std;
int max(int,int);
int main()
{
    int n,p;
    double ans;
    cout<<"enter a no. and its power:";
    cin>>n>>p;
    ans=pow(n,p);
    cout<<ans;
    return 0;
}
