#include <iostream>
#include <cmath>
using namespace std;
const int spaceHelper = 6;
int countDigits(int num)
{
    if (num == 0)
    {
        return num;
    }
    int count = 0;
    if (num < 0)
    {
        count = 1;
        num = -num;
    }
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter a number to see powers: ";
    cin >> n;

    int num[100];
    int powerOf2[100];
    int powerOf3[100];
    int powerOf5[100];
    int powerOf7[100];

    for (int i = 1; i <= n; i++)
    {
        num[i - 1] = i;
        powerOf2[i - 1] = pow(i, 2);
        powerOf3[i - 1] = pow(i, 3);
        powerOf5[i - 1] = pow(i, 5);
        powerOf7[i - 1] = pow(i, 7);
    }

    cout << "+---+-------+-------+-------+-------+" << endl;
    cout << "| n | n ^ 2 | n ^ 3 | n ^ 5 | n ^ 7 |" << endl;
    cout << "+---+-------+-------+-------+-------+" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "| " << num[i];
        if (num[i] < 10)
        {
            cout << "  ";
        }
        else if (num[i] < 100)
        {
            cout << " ";
        }

        cout << "| " << powerOf2[i];
        int spaces = spaceHelper - countDigits(powerOf2[i]);
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        cout << "| " << powerOf3[i];
        spaces = spaceHelper - countDigits(powerOf3[i]);
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        cout << "| " << powerOf5[i];
        spaces = spaceHelper - countDigits(powerOf5[i]);
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        cout << "| " << powerOf7[i];
        spaces = spaceHelper - countDigits(powerOf7[i]);
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        cout << "|" << endl;
    }

    cout << "+---+-------+-------+-------+-------+" << endl;
}