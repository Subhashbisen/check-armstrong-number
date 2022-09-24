#include <iostream>


using namespace std;

int main()
{
    int number, digit, sum = 0, n;
    n = number;

    cout << " ENTER THE POSITIVE NUMBERS " << endl;
    cin >> number;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (n == sum)
    {
        cout << " THE NUMBER IS ARMSTRONG " << endl;
    }
    else
    {
        cout << "THE NUMBER IS NOT ARMSTRONG" << endl;
    }

    return 0;
}