#include "stdafx.h"
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
    // Write your code here.
   //sort(array.begin(), array.end());
    auto it = array.begin();
    int count = array.size();
    while (it != array.end() && count != 0)
    {
            if (*it == toMove)
            {
                it = array.erase(it);
                array.emplace_back(toMove);


            }
            else
            {
                it++;
            }
            count--;
    }
    return array;
}

//
//int main()
//{
//    vector<int> array {2, 1, 2, 2, 2, 3, 4, 2};
//    int move = 2;
//
//    moveElementToEnd(array, move);
//}