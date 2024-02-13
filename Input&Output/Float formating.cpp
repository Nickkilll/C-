#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(6)<<a;
    cout<<"\n"<<fixed<<setprecision(3)<<a;
    cout<<"\n"<<fixed<<setprecision(2)<<a;
    cout<<"\n"<<setprecision(1)<<a;
    return 0;
}
