// Ralph's teacher Alisha uses chalks to write on board. When the chalk reduces to 1/squarerootNo of its original size she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and make another chalk of same size and uses it. If she uses one chalk each day, how much days she uses the given n number of chalks?
// Sample Input:
// 16

// Sample Output:

// 21


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem;
    cin>>n;
    rem=n*(1/sqrt(n));
    cout<<rem+1+n;
    
}
