#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    cout << sqrt(number)<<endl;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Pleas Enter Your Number : ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is a prime number!" << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
