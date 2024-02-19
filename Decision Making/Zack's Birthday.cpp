#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    int d;
    cin>>a>>d;
    switch(d)
    {
        case 1:cout<<fixed<<setprecision(2)<<"Zack's father needs to pay Rs."<<(a-(a*20)/100);break;
        case 3: case 4:cout<<fixed<<setprecision(2)<<"Zack's father needs to pay Rs."<<(a-(a*10)/100);break;
        case 6: case 7:cout<<fixed<<setprecision(2)<<"Zack's father needs to pay Rs."<<(a-(a*75)/100);break;
        case 12: case 11:cout<<fixed<<setprecision(2)<<"Zack's father needs to pay Rs."<<(a-(a*35)/100);break;
        default:cout<<fixed<<setprecision(2)<<"Zack's father needs to pay Rs."<<a;
    }
}
