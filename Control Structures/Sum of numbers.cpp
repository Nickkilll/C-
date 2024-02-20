#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    while(true)
    {
         cin>>a;
         if(a==-1)
         {
             break;
         }
         sum=sum+a;
    }
    cout<<sum;
    return 0;
}
