//write a cpp code for reverse a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello World!"; // Sample string
    string reversedStr; // String to store reversed string

    for(int i = str.length()-1; i >= 0; i--) // Iterate over original string from end to start
    {
        reversedStr += str[i]; // Concatenate characters in reverse order to reversed string
    }

    cout << "Original String : " << str << endl;
    cout << "Reversed String : " << reversedStr << endl;

    return 0;
}
