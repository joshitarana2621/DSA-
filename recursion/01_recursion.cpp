// Recursion -> function calls itself until sufficient condition
// [base condition] is reached
//
// LIFO -> first it goes to base condition,
// then from base condition back to the calling function

#include <iostream>
using namespace std;


// 1. Print name n times
int printName(int m, string name, int cnt)
{
    if(cnt > m)
    {
        return 0;       // base case
    }
    else
    {
        cout << cnt << name << "\n";

        return printName(m, name, cnt + 1);
    }
}


// 2. Print number n to 1 [with backtracking]
void printNumber(int n, int i)
{
    if(i > n)
    {
        return;         // base case
    }

    printNumber(n, i + 1);

    cout << i << "\n";
}


// 3. Print number n to 1 [without backtracking]
void printNum(int n)
{
    if(n < 1)
    {
        return;         // base case
    }

    cout << n << "\n";

    printNum(n - 1);
}


int main()
{
    int n;
    int cnt = 1;
    string name;

    cout << "Enter name: ";
    cin >> name;

    cout << "\nEnter number how many times you want to print your name: ";
    cin >> n;

    // 1. Print name n times
    printName(n, name, cnt);

    // 2. Print n to 1 using backtracking
    printNumber(n, 1);

    // 3. Print n to 1 without backtracking
    printNum(n);

    return 0;
}