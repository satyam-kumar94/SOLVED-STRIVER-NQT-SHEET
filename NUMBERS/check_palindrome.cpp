#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int y = 0;
    while (x > 0)
    {
        int digit = x % 10;
        y = (y * 10) + digit;
        x = x / 10;
    }
    return y;
}
int main()
{
    int x;
    cout<<"Enter Number: ";
    cin >> x;
    int dummy = x;
    int y = reverse(x);
    if (dummy == y)
    {
        cout << "Palindrome Number ";
    }
    else
    {
        cout << "Not Palindrome ";
    }
    return 0;
}

