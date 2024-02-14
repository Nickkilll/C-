#include<iostream>
using namespace std;
int main()
{
    int a,b,teams,rem;
    cin>>a>>b;
    teams=a/b;
    rem=a%b;
    cout<<"The number of students in each team is "<<teams<<" and left out is "<<rem;
    return 0;
    
}
