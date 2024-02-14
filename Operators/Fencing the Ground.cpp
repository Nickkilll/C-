#include<iostream>
using namespace std;
int main()
{
    int l,b,peri,area;
    cin>>l>>b;
    peri=(l+b)*2;
    area=l*b;
    cout<<"Required length is "<<peri<<"m"<<endl;
    cout<<"Required quantity of carpet is "<<area<<"sqm";
    return 0;
}
