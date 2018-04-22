#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    inputFile.open("Numbers.txt"); //name of file you would like to read from
    cout << "Reading data from the file!" << endl;

    inputFile >> number;    // reads first number
    cout << number << endl; // displays first number

    inputFile >> number;
    cout << number << endl;

    inputFile >> number;
    cout << number << endl;

    inputFile.close(); // close the file

    return 0;
}
