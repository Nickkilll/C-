#include<iostream>
using namespace std;
int main()
{
    int a,sqr;
    cin>>a;
    sqr=a*a;
    //

 if((sqr%10 || sqr/1000 || sqr/100)==a)
    {
        cout<<"Automorphic number";
    }
    else
    {
        cout<<"Not Automorphic number";
    }
    return 0;
}
