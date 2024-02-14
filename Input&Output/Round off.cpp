#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<int(a);
    cout<<"\n"<<fixed<<setprecision(1)<<ceil(a); //returns the smallest possible
    cout<<"\n"<<fixed<<setprecision(1)<<floor(a); // largest possible integer
    return 0;
    
}
