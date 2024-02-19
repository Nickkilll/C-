#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float r,h,aw,ho,vol;
    cin>>r>>h>>aw>>ho;
    vol=3.14*r*r*h;
    if(vol<aw*ho)
    {
        cout<<fixed<<setprecision(1)<<"The tank can be filled within "<<ho<<" hours";
        
    }
    return 0;
    
    
}
