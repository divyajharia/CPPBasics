#include "stdafx.h"
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

vector<int> smallestDifference(vector<int> array1, vector<int> array2)
{
    //write the code here
    int min = 25632563;
    int diff =0;
    vector<int> array_min;
    for (auto var1 : array1)
    {
        for (auto var2 : array2)
        {
            if (var1 > var2)
                diff = var1 -var2;
            else
                diff = var2 -var1;

            if (diff < min)
            {
                min = diff;
                array_min.clear();
                array_min.push_back( var1);
                array_min.push_back( var2 );
            }

        }
    }

    return array_min;
}

//int main()
//{
//    vector<int> array1{ 10, 1000, 9124, 2142, 59, 24, 596, 591, 124, -123 };
//    vector<int> array2{ -1441, -124, -25, 1014, 1500, 660, 410, 245, 530 };
//
//    smallestDifference(array1, array2);
//
//}