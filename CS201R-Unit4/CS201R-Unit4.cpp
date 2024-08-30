// CS201R-Unit4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>    //for stoi function
#include "arrayFunctions.h"
#include "vectorFunctions.h"
int main()
{
 
    cout << "REVIEW EXAMPLES\n";
    //REVIEW - INTEGER DIVISION & STATIC CASTING
    int a = 10, b = 3;
    float result = a / b;
    cout << "result = " << result << endl << endl;

    //REVIEW STRING TO INTEGER
    string str1 = "1234";
    a = stoi(str1);
    a += 15; 
    cout << "string is now an integer: " << a << endl << endl;

    //VERIFYING STRINGS
    char char1 = 'a', char2 = '7';
        
    cout << "digit? " << isdigit(char1) << " " << isdigit(char2) << endl;
    cout << "alpha? " << isalpha(char1) << " " << isalpha(char2) << endl << endl;
    cout << "why 4 ? ? ? no clue! " << endl;
    for (int i = 0; i < 6; i++) {
        char2 = char('0' + i);
        cout << char2 << " " << isdigit(char2) << " :: ";
    }
    cout << endl << endl;

    bool isDigit = str1.find_first_not_of("0123456789") == string::npos;
    cout << str1 << " contains only digits? " << isDigit << endl;

    string str2 = "123ABC";
    isDigit = str2.find_first_not_of("0123456789") == string::npos;
    cout << str2 << " contains only digits? " << isDigit << endl << endl;


    //REVIEW INTEGER TO ASCII CHAR
    char char3;
    cout << char(84) << char(104) << char(105) << char(115);
    cout << " is printing some stuff\n";
    for (int i = 0; i < 6; i++) {
        char3 = char('A' + i);
        cout << char3 << " ";
    }
    cout << endl << endl;
    /*
    //BINARY STRING TO DECIMAL VALUE
    str1 = "1110";  //binary string
    int dec = 0, pow = 1;
    for (int i = str1.length() - 1; i >= 0; --i) {
        if (str1.at(i) == '1')
            dec += pow;
        pow *= 2;
    }
    cout << "String: " << str1 << " = " << dec << " in decimal\n";


    //DECIMAL VALUE TO BINARY
    str1 = "";  //binary string
    int holdValue, decValue = 17, newBase = 2, remainder;
    holdValue = decValue;
    while (decValue > 0) {
        remainder = decValue % newBase;
        str1 = to_string(remainder) + str1;
        decValue /= newBase;
    }
    cout << "Decimal Value " << holdValue << " = " << str1 << " in binary\n";
    */
    cout << endl << endl << endl;
    //arrayExample1();
    //arrayExample2();
    //arrayExample3();
    //arrayExample4();
    //arrayExample5();

    cout << endl << endl << endl;
    //vectorExample1();  //find smallest;add values;print
    //vectorExample2();  //2-D vector (matrix)
}
 