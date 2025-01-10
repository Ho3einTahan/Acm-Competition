#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    int searchNumber;

    cout << "Enter the number to search: ";
    cin >> searchNumber;

    int array[10] = {1, 21, 23, 32, 101, 12, 65, 32, 12, 121};

    // Use sizeof to calculate array size
    int arraySize = sizeof(array) / sizeof(array[0]);

    bool isFound = false;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == searchNumber)
        {
            cout << "Number found in array !!!!" << endl;
            cout << "Index : " << i << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound)
    {
        cout << "Number not found in array!" << endl;
    }

    return 0;
}

// g++ linear-search.cpp -o app.exe
// ./app.exe