#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float p,r,n,a,b,dis;
    cin>>p>>r>>n;
    a=(p*n*r/100);
    b=p+a;
    dis=(a*2/100);
    cout<<fixed<<setprecision(2)<<a<<"\n"<<b<<"\n"<<dis<<"\n"<<b-dis;
    
    return 0;
    
}
