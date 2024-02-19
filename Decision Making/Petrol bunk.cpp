#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,B_S;
    char d;
    cin>>a>>b>>c>>d;
    B_S= b-a;
    if(d=='B')
    {
        cout<<fixed<<setprecision(2)<<(a)/c<<endl;
        cout<<fixed<<setprecision(2)<<B_S/c;
        
    }
    if(d=='A')
    {
        cout<<fixed<<setprecision(2)<<(b)/c<<endl;
        cout<<fixed<<setprecision(2)<<"0.00";
    }
    return 0;
    
}
