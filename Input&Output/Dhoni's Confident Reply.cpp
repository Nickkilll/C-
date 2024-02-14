
#include<iostream>
using namespace std;
int main()
{
    char ques[100];
    char reply[100];
    cout<<"Banerjee's Question:\n";
    cin.getline(ques,100);
    cout<<"Dhoni's Reply:\n";
    cin.getline(reply,100);
    cout<<"For Banerjee's question \""<<ques<<"\" Dhoni's confident reply was \""<<reply;
    return 0;
}
