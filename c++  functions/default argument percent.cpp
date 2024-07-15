#include<iostream>
#include<math.h>
using namespace std;
float percent(int sub1,int sub2,int total=200)
{
    return float(sub1+sub2)/total*100;
}
int main()
{
    cout<<percent(45,90)<<endl;
    cout<<percent(80,90)<<endl;
    cout<<percent(75,85)<<endl;
    cout<<percent(120,130,300)<<endl;
    return 0;
}
