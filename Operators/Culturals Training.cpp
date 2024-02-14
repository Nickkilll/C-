#include<iostream>
using namespace std;
int main()
{
    int stu,teams,a;
    cin>>stu>>teams;
    a=stu/teams;
    cout<<a<<"\n"<<stu-(teams*a);
    return 0;
    
}
