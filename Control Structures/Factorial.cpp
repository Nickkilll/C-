// Write a C program to find the factorial of a given number.

// Sample Input:
// 5

// Sample Output:

// 120

#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}
