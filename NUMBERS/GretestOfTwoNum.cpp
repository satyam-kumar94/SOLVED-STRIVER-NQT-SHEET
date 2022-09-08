#include <iostream>
using namespace std;
int main()
{
    /*int num1, num2;
    cout << "Enter Two Number ";
    cin >> num1 >> num2;
    if (num1 < num2)
    {
        cout << "The Gretest of two num is " << num2;
    }
    else
    {
        cout << "The Gretest of two num is " << num1;
    }*/
    int num1, num2;
    cout << "Enter Two Number ";
    cin >> num1 >> num2;
    cout<<"The Gretest of two num is: "<< max(num1,num2);
    return 0;
}