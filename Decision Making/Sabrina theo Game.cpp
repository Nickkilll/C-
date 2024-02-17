#include<iostream>
using namespace std;
int main()
{
    int month,year;
    cin>>month>>year;
    switch(month)
    {
        case 1:cout<<"Number of days is 31";break;
        case 3:cout<<"Number of days is 31";break;
        case 4:cout<<"Number of days is 30";break;
        case 5:cout<<"Number of days is 31";break;
        case 6:cout<<"Number of days is 30";break;
        case 7:cout<<"Number of days is 31";break;
        case 8:cout<<"Number of days is 31";break;
        case 9:cout<<"Number of days is 30";break;
        case 10:cout<<"Number of days is 31";break;
        case 11:cout<<"Number of days is 30";break;
        case 12:cout<<"Number of days is 31";break;
        case 2:
         if(year%4==0 &&year%100!=0 ||year%400== 0)
         {
             cout<<"Number of days is 29";
         }
         else 
         {
             cout<<"Number of days is 28";
         }
       
        return 0;
        
        
    }
    
}
