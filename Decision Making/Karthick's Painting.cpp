#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,wall,p1,p2,pt;
    cin>>a>>b>>c>>d>>e>>f;
    wall=a*b;
    p1=c*d;
    p2=e*f;
    pt=p1+p2;
    if(wall>=pt)
    {
        cout<<"Karthi can fix both painting";
    }
    else
    {
        cout<<"Karthi cannot fix both painting";
    }
    
}
