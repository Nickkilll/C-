#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<< string(a%2==0 ? "Even" : "Odd");
    return 0;
    
}
