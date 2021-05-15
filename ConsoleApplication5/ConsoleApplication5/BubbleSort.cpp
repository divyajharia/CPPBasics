#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//best case O(N)
//Worst case O(N*N)

vector<int> BubbleSort(vector<int> arr)
{
    int count = 0;
    bool isSorted = false;
    while (!isSorted)
    {
        isSorted = true;
        for (int i = 0; i < arr.size() - 1 - count; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }
        count++;
    }
    return arr;
}

//time Complexitiy of this is O(N*N)

//vector<int> BubbleSort(vector<int> arr)
//{
//    for (int i = 0; i < arr.size(); i++)
//    {
//        for (int j = i; j < arr.size()-1; j++)
//        {
//            if ( arr[j + 1] < arr[j])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    return arr;
//}


//int main()
//{
//    vector<int> array {1, 5, 8, 2, 3, 15, 11};
//    array = BubbleSort(array);
//   
//    for each (auto var in array)
//    {
//        cout << var << endl;
//    }
//}