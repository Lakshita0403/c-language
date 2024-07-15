#include<iostream>
using namespace std;
int main()
{
    int term,count,n ,sign;
    cout<<"enter how many terms:";
    cin>>n;
    term=count=sign=1;
    while(count<=n)
    {
        cout<<term*sign<<",";
        term+=2;
        sign=-sign;
        count++;
    }
    cout<<"\b";
    return 0;
}
