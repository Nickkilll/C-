#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>=65 && a<=90)
    {
        cout<<"Upper";
    }
    else if(a>=91 && a<=122)
    {
        cout<<"Lower";
    }
    else if(a>=48 && a<=57)
    {
        cout<<"Number";

    }
    else{
        cout<<"Symbol";
    }
    return 0;
}
