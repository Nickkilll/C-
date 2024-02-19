#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c<=a || c%a==1 || c%a==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
        return 0;
}
