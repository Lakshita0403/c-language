#include<iostream>
#include<math.h>
using namespace std;
int mult(int a=1,int b=1,int c=1,int d=1)
{
    return a*b*c*d;
}
int main()
{
    cout<<mult(6,9,8,4)<<endl;
    cout<<mult(6,9,8)<<endl;
    cout<<mult(6,9)<<endl;
    cout<<mult(6)<<endl;
    cout<<mult()<<endl;
   return 0;
}
