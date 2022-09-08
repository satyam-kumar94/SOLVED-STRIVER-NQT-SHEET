/*What are Armstrong Numbers?

Armstrong Numbers are the numbers having the sum of digits raised to power no.
 of digits is equal to a given number. Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.*/
 
#include <bits/stdc++.h>
using namespace std;
bool ArmstrongNumber(int n)
{
    int OrignalNo = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int SumOfPower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        SumOfPower += pow(digit, count);
        n /= 10;
    }
    return (SumOfPower == OrignalNo);
}
int main()
{
    int N;
    cout << "Enter Number ";
    cin >> N;
    if (ArmstrongNumber(N))
    {
        cout << "It's Armstrong Number " << endl;
    }
    else
    {
        cout << "It's Not Armstrong Number " << endl;
    }
    return 0;
}