#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float item_1,item_2,dis,t_amount,dis_amount,saved,a;
    cin>>item_1>>item_2>>dis;
    //total
    t_amount=item_1+item_2;
    //discount
    a=(item_1*(dis/100)) + (item_2 *(dis/100));
    dis_amount= (t_amount - a);
    saved= t_amount - dis_amount;
    cout<<fixed<<setprecision(2)<<t_amount<<"\n"<<dis_amount<<"\n"<<saved;
    return 0;
    
}
