// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
    // Write your code here.
    
    
    vector<vector<int>> array1;
    vector<int> array2;
    
    for (int i = 0; i < array.size()-2; i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            for (int k = j + 1; k < array.size(); k++)
            {
                if (targetSum == (array.at(i) + array.at(j) + array.at(k)))
                {
                    
                  array1.push_back({ array.at(i), array.at(j), array.at(k) });
                                                
                }
               
            }
           
        } 
       
    }

    return array1;
}


//int main()
//{
//    vector<int>array {4, 8, 0, 7, 9, -1, 6, 1};
//    int targetsum = 7;
//    threeNumberSum(array, targetsum);
//    return 0;
//}

