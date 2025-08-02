#include <iostream>
#include <cmath>
using namespace std;

int countDigits(long long num)
{
    if (num == 0)
        return 1;
    int count = 0;
    if (num < 0)
    {
        count = 1;
        num = -num;
    }
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number to see powers: ";
    cin >> n;

    long long powerOf2[100], powerOf3[100], powerOf5[100], powerOf7[100];

    for (int i = 1; i <= n; i++)
    {
        powerOf2[i - 1] = pow(i, 2);
        powerOf3[i - 1] = pow(i, 3);
        powerOf5[i - 1] = pow(i, 5);
        powerOf7[i - 1] = pow(i, 7);
    }

    cout << "+-----+------------+------------+--------------+--------------+" << endl;
    cout << "| n   | n ^ 2      | n ^ 3      | n ^ 5        | n ^ 7        |" << endl;
    cout << "+-----+------------+------------+--------------+--------------+" << endl;

    for (int i = 0; i < n; i++)
    {
        int num = i + 1;
        cout << "| ";
        if (num < 10) cout << num << "   ";
        else if (num < 100) cout << num << "  ";
        else cout << num << " ";

        long long values[] = { powerOf2[i], powerOf3[i], powerOf5[i], powerOf7[i] };
        int widths[] = { 10, 10, 12, 12 };

        for (int k = 0; k < 4; k++)
        {
            cout << "| " << values[k];
            int space = widths[k] - countDigits(values[k]);
            for (int j = 0; j < space; j++) cout << " ";
        }
        cout << "|" << endl;
    }

    cout << "+-----+------------+------------+--------------+--------------+" << endl;
}
