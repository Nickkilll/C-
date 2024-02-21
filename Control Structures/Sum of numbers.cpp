// Write a program to print the sum of given range of numbers.

// Sample Input:
// 5

// 10

// Sample Output:

// 45

#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    while(true)
    {
         cin>>a;
         if(a==-1)
         {
             break;
         }
         sum=sum+a;
    }
    cout<<sum;
    return 0;
}
