// Write a C program to print the sum of given numbers. The values must be scanned until the user enters -1 as value.

// Sample Input:
// 1

// 2

// 3

// 4

// -1

// Sample Output:
// 10

#include<iostream>
using namespace std;
int main()
{
    int a,b,op=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        op=op+i;
    }
    cout<<op;
    return 0;
    
}
