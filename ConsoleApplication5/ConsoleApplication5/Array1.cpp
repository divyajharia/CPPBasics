
#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include <array>
using namespace std;

//String literals
//The syntax of raw string is that the literal starts with R”( and ends in )”.
//int main()
//{
//
//    const char* s1 = R"foo(
//Hello \n
//  World
//)foo";
//    cout << s1<<endl;
//
//}









//Multi Dimensional Array
//initializing the 2Darray 
//
//first method :
//int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}
//
//Better  method :
//
//int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

//initializing the 3Darray 
//first method :
//
//int x[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
//11, 12, 13, 14, 15, 16, 17, 18, 19,
//20, 21, 22, 23};
//
//Better Method :
//
//int x[2][3][4] =
//{
//    { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } },
//    { { 12,13,14,15 },{ 16,17,18,19 },{ 20,21,22,23 } }
//};
























//5 Types of Strings 
//1> char Pointer
//2> Array of char
//3> String STL
//4> Vector STL
//5> Array STL

//int main()
//{
//    char* d="hythus" ;
//    char dd = 'yuy';
//    cout << dd << endl;
//    const char *color[]{ "blue","green","yellow","red"};
//    for (int i = 0; i < 4; i++)
//    {
//        cout << color[i]<<endl;
//    }
//    cout << d <<endl;
//    cout << sizeof(d) << endl;
//
//    // Declaring Vector of String type
//    // Values can be added here using initializer-list syntax
//    std::vector<std::string> colour{ "Blue", "Red", "Orange" };
//
//    // Strings can be added at any time with push_back
//    colour.push_back("Yellow");
//    // Print Strings stored in Vector
//    for (int i = 0; i < colour.size(); i++)
//        std::cout << colour[i] << "\n";
//
//    // Initialize array
//    std::array<std::string, 4> colour1{ "Blueeeeeeeee", "Reeeeeeed", "Orangeeeeeeeeeee",
//        "Yeeeeeeeeeellow" };
//
//    // Printing Strings stored in array
//    for (int i = 0; i < 4; i++)
//        std::cout << colour1[i] << "\n";
//}




















//Practice Basics of array and pointers

//int main()
//{
//    int a[7] = { 1,2,3,4,5 ,2,5};
//    char z[] = { 'd','f','f','f','d' };
//    char *p = z;
//    cout << sizeof(a)<< "   "<< sizeof(p)<<endl;
//    for (int i = 1; i < 8; i++)
//        cout << " " << a[i] << endl;
//
//}