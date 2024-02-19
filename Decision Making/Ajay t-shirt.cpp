#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,h,i,j,flip,snap,ama,fd,sd,ad;
    cin>>a>>b>>c>>d>>e>>f>>h>>i>>j;
    fd=(a*b)/100;
    sd=(d*e)/100;
    ad=(h*i)/100;
    flip= ((a-fd)+c);
    snap= ((d-sd)+f);
    ama= ((h-ad)+j);
    cout<<"In Flipkart Rs."<<flip<<"\nIn Snapdeal Rs."<<snap<<"\nIn Amazon Rs."<<ama<<endl;
    if(flip<snap && flip<ama)
    {
        cout<<"He will prefer Flipkart";
    }
    else if( snap<flip && snap<ama)
    {
        cout<<"He will prefer Snapdeal";
    }
    else
    {
        cout<<"He will prefer Amazon";
    }
    return 0;
}
