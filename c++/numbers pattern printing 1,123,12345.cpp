#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"enter number of rows:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        j=1;
        while(j<=2*i-1)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
