// It was Randall's first day at school. His teacher Alisha asked the students to meet every other students in the class and to introduce about themselves. The teacher asked them to do handshakes when they meet each other.
// If there are n number of students in the class then find the total number of handshakes made by the students.

// Sample Input:
// 15

// Sample Output:

// 105

  #include<iostream>
using namespace std;
int main()
{
    int a,hand;
    cin>>a;
    hand=(a*(a-1))/2;
    cout<<hand;
    return 0;
    
    
}
