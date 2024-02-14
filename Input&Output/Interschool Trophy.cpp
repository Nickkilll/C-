#include<iostream>
using namespace std;
int main()
{
    char t1_name[100];
    char t2_name[100];
    int score_1,overs_1,score_2,overs_2;
    cout<<"Team 1:\nTeam Name:\n";
    cin.getline(t1_name, 100);
    cout<<"Score:\n";
    cin>>score_1;
    cout<<"Overs played:\n";
    cin>>overs_1;
    cin.ignore();
    cout<<"Team 2:\nTeam Name:\n";
    cin.getline(t2_name, 100);
    cout<<"Score:\n";
    cin>>score_2;
    cout<<"Overs played:\n";
    cin>>overs_2;
    cout<<"Match Details:"<<"\nTeam 1:"<<"\nName: "<<t1_name<<"\nScore: "<<score_1<<"\nOvers played: "<<overs_1<<"\nTeam 2:"<<"\nName: "<<t2_name<<"\nScore: "<<score_2<<"\nOvers played: "<<overs_2;
    
    

    
    return 0;
    
    

}
