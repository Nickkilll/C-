#include<iostream>
using namespace std;
int main()
{
    int gold,fp,sp,fs,ss,rem,rem2,os;
    cin>>gold>>fp>>sp;
    fs=((gold*fp)/100);
    rem= gold-fs;
    ss=((rem*sp)/100);
    rem2=gold-(ss+fs);
    os=rem2/3;
    cout<<fs<<"\n"<<ss<<"\n"<<os;
    return 0;
    
}
