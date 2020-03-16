#include<iostream>

using namespace std;

int main()
{
    int n, num1, num2, rev = 0, rem, sum;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num1 >> num2;
        cin.sync();

        while (num1 != 0)
	    {
            rem = num1 % 10;
            rev = rev * 10 + rem;
            num1 = num1 / 10;
        }

        num1 = rev;
        rev = 0;

        while (num2 != 0)
	    {
            rem = num2 % 10;
            rev = rev * 10 + rem;
            num2 = num2 / 10;
        }

        num2 = rev;
        rev = 0;

        sum = num1 + num2;

        while (sum != 0)
	    {
            rem = sum % 10;
            rev = rev * 10 + rem;
            sum = sum / 10;
        }

        sum = rev;
        rev = 0;

        cout << sum << endl;
    }

    return 0;
}