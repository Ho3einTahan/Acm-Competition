#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // create file if is not exist
    ofstream MyFile("file.txt");

    // write on file
    MyFile << "Files can be tricky, but it is fun enough!";

    return 0;
}