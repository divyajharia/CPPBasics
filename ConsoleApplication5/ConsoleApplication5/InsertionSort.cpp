#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


//https://www.geeksforgeeks.org/insertion-sort/
vector<int> insertionSort(vector<int> array) {
    // Write your code here.

    for (int i = 1; i < array.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] < array[j - 1])
                swap(array[j], array[j - 1]);

        }
    }
    return array;
}





//int main()
//{
//    vector<int> array {1, 5, 8, 2, 3, 15, 11};
//    array = insertionSort(array);
//   
//    for each (auto var in array)
//    {
//        cout << var << endl;
//    }
//}