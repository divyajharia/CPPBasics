#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    // Write your code here.
    int end = str.size() - 1;
    for (int i = 0, j = end; i <= j; i++, j--)
    {
        if (str[i] != str[j])
            return false;
    }
        return true;
}


//int main()
//{
//    string str = "DiviD";
//    bool returnvalue = isPalindrome(str);
//    cout << " " << returnvalue << endl;
//}