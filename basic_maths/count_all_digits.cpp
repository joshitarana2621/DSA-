/*
Problem: Count digits

Approach:
- n % 10 -> get last digit
- n / 10 -> remove last digit

Edge Cases:
- n = 0
- single digit
- negative number

Time: O(log n)
Space: O(1)
*/

#include<iostream>
using namespace std;

int main()
{
int n,rem,count =0;
cout<<"enter number:"<<endl;
cin>>n;
while(n!=0)
{
 rem = n%10;
 count++;
 n = n/10;
}
cout<<"no of digits in number is:"<<count<<endl;
}