#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> digits;
    int digit;

    while (cin >> digit && digit != -1)
    {
        digits.push_back(digit);
    }

    for (int i = 0; i < digits.size(); i++)
    {

        int sum = 0;

        for (int j = 0; j < digits.size(); j++)
        {
            if (i != j)
            {
                cout << digits[i] << digits[j] << endl;
            }
        }
    }

    return 0;
}