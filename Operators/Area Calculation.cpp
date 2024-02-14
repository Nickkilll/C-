#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int s,l,b;
    float r,ci;
    cin>>s>>l>>b>>r;
    cout<<s*s<<"\n"<<l*b<<"\n";
    ci=3.14*r*r;
    cout<<fixed<<setprecision(2)<<ci;
    return 0;
}
