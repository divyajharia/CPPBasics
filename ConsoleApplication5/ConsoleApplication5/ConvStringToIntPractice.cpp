#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include<stdio.h>
#include <sstream>
using namespace std;
// A stringstream is similar to input/output
// file stream. We need to declare a stringstream
// just like an fstream, for example: 
////stringstream ss;

// and, like an fstream or cout, 
// we can write to it:
////ss << myString; or
////ss << myCstring; or
////ss << myInt; , or float, or double, etc.

// and we can read from it:
////ss >> myChar; or
////ss >> myCstring; or
////ss >> myInt;
//To summarize, stringstream is a convenient way to manipulate strings.

// https://www.geeksforgeeks.org/converting-string-to-number-and-vice-versa-in-c/
// https://www.geeksforgeeks.org/stringstream-c-applications/

//int main()
//{
//
//    string s = "123456";
//    stringstream value(s);
//    int x = 0;
//    value >> x;
//    cout << "valueof x  :"<<x <<endl;
//
//
//    ////Scanf
//    const char *str = "12345";
//    int x1;
//    sscanf_s(str, "%d", &x1);
//    printf("\nThe value of x : %d \n", x1);
//    return 0;
//
//}
//
