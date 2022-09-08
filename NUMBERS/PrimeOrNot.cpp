#include <bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter Number";
    cin >> n;
    bool ans = isPrime(n);
    if (n != 1 && ans == true)
    {
        cout << "Prime Number " << endl;
    }
    else
    {
        cout << "Not Prime " << endl;
    }
    return 0;
}