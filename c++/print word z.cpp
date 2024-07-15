#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter no.of rows:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=n;
        while(j>=1)
        {
            if(j==n||i==n||j==1)
              cout<<"*";
            else
              cout<<(char)32;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
