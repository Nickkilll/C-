#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float tw,wv,op;
    cin>>tw>>wv;
    op=(35.74 + 0.6215*(tw) + (0.4275*(tw) - 35.75) * pow(wv,0.16));
    cout<<fixed<<setprecision(2)<<op;
    return 0;
    
}
