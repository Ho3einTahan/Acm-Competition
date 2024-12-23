#include <iostream>
#include <string>

using namespace std;

int main()
{

    int numbers[9] = {1, 10, 12, 3, 8, 15, 16, 13, 15};

    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j < 9; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(numbers[j],numbers[j+1]);
            }
        }
    }
    
    for (int i = 0; i < 9; i++)
    {
            cout<<numbers[i]<<endl;
    }
    

    return 0;
}