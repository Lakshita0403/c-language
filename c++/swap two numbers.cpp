#include<iostream>
using namespace std;
int main()
{
    int a,b;
   cout<<"enter two numbers";
   cin>>a>>b;
   cout<<"before swap values are"<<a<<","<<b<<endl;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"after swap values are"<<a<<","<<b<<endl;
   return 0;
}
