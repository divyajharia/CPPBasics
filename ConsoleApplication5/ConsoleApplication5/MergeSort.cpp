#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void mergeSortHelper(vector<int> & array, int low, int high);
void merge(vector<int> &array, int low, int high, int middle);

vector<int> mergeSort(vector<int> array) {
    // Write your code here.
    mergeSortHelper(array, 0, array.size() - 1);
    return array;
}

void mergeSortHelper(vector<int> & array, int low, int high)
{
    if (low >= high)
        return;
   
   
        int middle = low + ((high-low ) / 2);
        mergeSortHelper(array, low, middle);
        mergeSortHelper(array, middle + 1, high);
        merge(array, low, high, middle);
  
   

}
//https://www.codeproject.com/Questions/502812/expressionplusmustplushaveplusaplusconstantplusval
void merge(vector<int>& array, int low, int high, int middle)
{
    int lSize = middle - low + 1;
    int rSize = high - middle;
    vector<int >left(lSize), right(rSize);

    //copy data to temp arrays
    for (int i = 0; i < lSize; i++)
        left[i] = array[low + i];
    for (int j = 0; j < rSize; j++)
        right[j] = array[middle + 1 + j];


    int i = 0;
    int j = 0;
    int k = low;
    //merge temp arrays to main array
    while (i < lSize && j < rSize )
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    //copy remaining elements of Left[]
    while (i<lSize)
    {
        array[k] = left[i];
        i++;
        k++;
    }
    while (j<rSize)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}


//
//int main()
//{
//    vector<int> array {1, 5, 8, 2, 3, 15, 11};
//    array = mergeSort(array);
//   
//    for each (auto var in array)
//    {
//        cout << var << endl;
//    }
//}