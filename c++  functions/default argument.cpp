#include<iostream>
#include<math.h>
using namespace std;
int sum(int a=0,int b=0,int c=0,int d=0)
{
return a+b+c+d;
}
int main()
{
    cout<<sum(5,6,7,8)<<endl;
    cout<<sum(5,6,7)<<endl;
    cout<<sum(6,8)<<endl;
    cout<<sum(9)<<endl;
    cout<<sum()<<endl;
    return 0;
}
