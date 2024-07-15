#include<iostream>
using namespace std;
int main()
{
    int i,n,fact;
    cout<<"enter a number:";
    cin>>n;
    i=n;
    fact=1;
    while(i>=1)
    {
        fact*=i;
        i--;
    }
    cout<<"factorial is :"<<fact;
    return 0;
}
