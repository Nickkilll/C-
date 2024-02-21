// Write a C program to find the multiplication tables:

// Sample Input:

// 1

// 5

// Sample Output:

// 1 * 1 = 1
// 1 * 2 = 2
// 1 * 3 = 3
// 1 * 4 = 4
// 1 * 5 = 5
  
  
  
  
#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
        
    }
    return 0;
}
