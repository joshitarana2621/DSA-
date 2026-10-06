/*Approach 
 1.checked number is null or  not
 2.then convert num to string for easy access
 3.used two pointer left at first element  and right at last element
 4.then checked if l==r then l++,r++ else return false

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isPalindrome(int n) {
        // Negative numbers are not palindromes.
        if (n < 0) {
            return false;
        }

        // Convert number to string.
        string s = to_string(n);

        // Pointers for both ends.
        int left = 0;
        int right = (int)s.size() - 1;

        // Compare digits from both sides.
        while (left < right) {
            // Mismatch means not a palindrome.
            if (s[left] != s[right]) {
                return false;
            }

            // Move to the next left digit.
            left++;

            // Move to the next right digit.
            right--;
        }

        return true;
    }
};

// Driver code starts
int main() {
    Solution sol;
    cout << (sol.isPalindrome(121) ? "true" : "false") << endl;
    return 0;
}