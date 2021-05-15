#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

bool generateDocument(string characters, string document) {
    // Write your code here.
    char *one = &characters[0];
    char *two = &document[0];
    if (lexicographical_compare(one, one + (characters.size() - 1), two, two + (document.size() - 1)))
        return false;
    else
        return true;
}

//
//int main()
//{
//    string one = "bes";
//        string two = "Best";
//        cout << generateDocument(one, two) << endl;
//}