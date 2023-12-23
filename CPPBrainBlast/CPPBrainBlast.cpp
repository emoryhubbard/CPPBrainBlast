// CPPBrainBlast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "utils.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using utils::input;

int main() {
    /*
    * First brain blast is to output your own word. This code outputs "broom".
    The code in the comment outputs "roar'. You can use your own words for the
    other variables too if you want.
    */
    string name = "emory";
    string pet = "cat";
    string president = "biden";
    vector<int> array1 = { 1, 2, 3, 4 }; // just to demonstrate how to create arrays of other things, not just letters
    vector<string> months = { "March", "Jan", "Feb", "Dec" }; // same reason as above

    // roar

    // string myWord = string(1, name[3]) + name[2] + pet[1] + name[3];

    // broom

    string myWord = string(1, president[0]) + name[name.length() - 2]
        + name[name.length() - 3] + name[name.length() - 3] + name[name.length() - 4];

    cout << myWord << endl;


    /* Test adding/using a C++ utility library file called utils.cpp
    string user = input("What is your name? ");
    cout << "Hi, " + user;
    */

    /* Goal is to print the board to the screen. It should look the
    * same way it looks in the code (not inverted, not more than three
    * lines, not x's or o's in any different positions, etc.)
    */

    // Wanted to use vector<string>, but would need to convert each xo
    vector<char> row1 = { 'x', 'o', 'x' };
    vector<char> row2 = { 'x', 'x', 'o' };
    vector<char> row3 = { 'o', 'x', 'o' };

    vector<vector<char>> board = { row1, row2, row3 };

    /* Clear the board */

    return 0;
}


/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string myString = "Pete";
    myString += "r";
    cout << myString << "\n"; // Pete
    cout << myString[0] << "\n"; // Peter

    myString += myString[1];

    cout << myString[]

    cout << "Hello World!\n";
}*/
