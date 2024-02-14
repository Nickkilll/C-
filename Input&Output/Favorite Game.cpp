#include<iostream>
using namespace std;
int main()
{
    char name[100];
    char game[100];
    cout<<"Name:\n";
    cin.getline(name,100);
    cout<<"Game:\n";
    cin.getline(game,100);
    cout<<"My name is "<<name<<" and I love to play "<<game<<"\n";
    return 0;
    

}
