#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//https://www.geeksforgeeks.org/selection-sort/


int minElement(vector<int> array, int index);

vector<int> selectionSort(vector<int> array) {
    // Write your code here.
    if (array.empty())
        return{};
    int minIndex = 0;
    for (int i = 0; i < array.size() ; i++)
    {
       minIndex = minElement(array, i);
      swap(array[i], array[minIndex]);
    }
    return array;
}

int minElement(vector<int> array, int index)
{
    int min = INT_MAX;
    int minIndex = 0;
    int i;
    for ( i = index; i < array.size(); i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            minIndex = i;
        }
    }
    return minIndex;
}



//int main()
//{
//    vector<int> array {1, 5, 8, 2, 3, 15, 11};
//    array = selectionSort(array);
//   
//    for each (auto var in array)
//    {
//        cout << var << endl;
//    }
//}