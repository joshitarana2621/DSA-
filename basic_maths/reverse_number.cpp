/*
    Problem: Reverse a Number

    Approach:
    - n % 10 gives the last digit of the number.
    - rev = rev * 10 + rem adds the digit to the reversed number.
    - n / 10 removes the last digit.
    - Repeat until n becomes 0.

    Example:
    n = 1234

    rem = 4 -> rev = 4
    rem = 3 -> rev = 43
    rem = 2 -> rev = 432
    rem = 1 -> rev = 4321


    Time Complexity: O(log n)
    Space Complexity: O(1)
*/
#include<iostream>
using namespace std;

int main()
{
int n,rem,rev=0;
cout<<"enter number:"<<endl;
cin>>n;
while(n!=0) 
{
 rem = n%10;
 rev = rev*10+rem;
  n = n/10;
}
cout<<"reverse num of give  number is:"<<rev<<endl;
}