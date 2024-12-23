
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, word;

    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter word to search: ";
    cin >> word;

    size_t pos = text.find(word);
    while (pos != string::npos) {
        text.insert(pos, "*");
        pos = text.find(word, pos + word.length() + 1);
    }

    cout << text << endl;

    return 0;
}

