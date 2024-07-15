#include<iostream>
using namespace std;
int main()
{
    int term ,count,n;
    cout<<"enter how many terms:";
    cin>>n;
    term=1;
    count=1;
    while(count<=n)
    {
        cout<<term<<",";
       // term+=2;
       //term=-term;
       //term=1-term;
       //term=count%2;
      term=!term;
       count++;
    }
    cout<<"\b";
    return 0;
}
