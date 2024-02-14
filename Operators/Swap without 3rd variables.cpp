#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=a+b;
    a=a-b;
    b=b+a;
    b=b-a;
    cout<<b<<"\n"<<a;
    return 0;
    
}
