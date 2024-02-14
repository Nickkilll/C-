#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,mid1,mid2;
    cin>>a>>b>>c>>d;
    mid1=(a+c)/2;
    mid2=(b+d)/2;
    cout<<fixed<<setprecision(1)<<"Binoy's house is located at ("<<mid1<<","<<mid2<<")";
    return 0;
    
}
