#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {

      for (int j = 0; j < i; j++)
      {
        cout << "*";
      }
      cout<<endl;

    }

    return 0;
}

// g++ triangle.cpp -o app.exe
// ./app.exe