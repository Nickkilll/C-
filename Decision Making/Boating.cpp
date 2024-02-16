#include<iostream>
using namespace std;
int main()
{
    int a,b,c,adult,child,Total;
    cin>>a>>b>>c;
    adult=(b*75);
    child=(c*50);
    Total=adult+child;
    if(Total<=a)
    {
       cout<<"Boat is Stable";
    }
    else
    cout<<"Boat will drown";

    return 0;
    
}
