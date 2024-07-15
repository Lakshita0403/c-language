#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"enter num of rows:";
cin>>n;
i=n;
while(i>=1)
{
    j=1;
    while(j<=i)
    {
        cout<<j;
        j++;
    }
  cout<<endl;
    i--;
}
return 0;
}
