#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void quickSortHelper(vector<int> &array, int low, int higher);
int partition(vector<int> &array, int low, int high);
void swap_1(int * a, int *b);
// Pivot element
//iterate in respect of Pivot 
vector<int> quickSort_1(vector<int> array) {
    // Write your code here.

    int low = 0;
    int high = array.size() -1 ;
    quickSortHelper(array, low, high);
    return array;
}

void quickSortHelper(vector<int> &array, int low, int higher)
{
    if (low >= higher)
        return;
   
    if (low < higher)
    {
       int  pi = partition(array, low, higher);
        
        quickSortHelper(array, low, pi - 1);
        quickSortHelper(array, pi + 1, higher);
    }

}


int partition(vector<int> &array, int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array[i], array[j]);

        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void swap_1(int * a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//int main()
//{
//    vector<int> array {1, 5, 8, 2, 3, 15, 11};
//    array = quickSort_1(array);
//
//    for each (auto var in array)
//    {
//        cout << var << endl;
//    }
//}