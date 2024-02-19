#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,fair;
    cin>>a>>b>>c>>d;
    if(a==33)
    {
        cout<<"Front-left : Untouched\n";
    }
    if(a<33)
    {
        cout<<"Front-left : Inflate\n";
    }
    if(a>33)
    {
        cout<<"Front-left : Deflate\n";
    }
    if(b==32)
    {
        cout<<"Rear-left : Untouched\n";
    }
    if(b>32)
    {
        cout<<"Rear-left : Deflate\n";
        
    }
    if(b<32)
    {
        cout<<"Rear-left : Inflate\n";
    }
    if(c==32)
    {
        cout<<"Rear-right : Untouched\n";
    }
    if(c>32)
    {
        cout<<"Rear-right : Deflate\n";
    }
    if(c<32)
    {
        cout<<"Rear-right : Inflate\n";
    }
    
    if(d==33)
    {
        cout<<"Front-right : Untouched\n";
        
    }
    
    if(d<33)
    {
        cout<<"Front-right : Inflate\n";
    }
    
    if(d>33)
    {
        cout<<"Front-right : Deflate\n";
    }
    return 0;
   
    
}
