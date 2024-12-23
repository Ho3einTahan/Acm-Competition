#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
            sum += j;
        }
        cout << sum << endl;
    }

    return 0;
}

// g++ soal2.cpp -o app.exe
// ./app.exe