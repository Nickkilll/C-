#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cin>>a;
    b=a*0.5;
    c=a*0.65;
    d=a*0.80;
    e=a*1.25;
    
    if(a<=200)
    {
        cout<<"Rs."<<ceil(b);
        
    }
    else if(a<=400)
    {
        cout<<"Rs."<<ceil(c+100);
    }
    else if(a<=600)
    {
        cout<<"Rs."<<ceil(d+200);
    }
    else
    {
        cout<<"Rs."<<ceil(e+425);
    }
    return 0;
    
}
