/* Problem: Count odd digits

 Approach:
 1. Extract last digit using n % 10.
 2. Check if digit is odd using digit % 2 != 0.
 3. Remove last digit using n / 10.
 4. Repeat until n becomes 0.

 Time Complexity: O(log n)
 Space Complexity: O(1)*/

#include <iostream>
using namespace std;

int main()
{
    int n, rem, count = 0;
    cout << "enter number:" << endl;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 != 0)
        {
            count++;
        }
        n = n / 10;
    }
    cout << "no of  odd digits in number is:" << count << endl;
}