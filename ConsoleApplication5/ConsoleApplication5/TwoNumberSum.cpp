#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include<stdio.h>
#include <sstream>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	// Write your code here.
	vector<int> v;
	auto it = array.begin();
	while (it != array.end())
	{
		int x = targetSum - *it;
		auto z = find(it + 1, array.end(), x);
		if (z != array.end())
		{
			v.push_back(*it);
			v.push_back(*z);
			return (v);
		}
		it++;
	}
	return v;
}


//int main(void)
//{
//	vector<int> array{ 6,8,0,9,5,3,2,4 };
//	int target = 9;
//	
//	vector<int> x = twoNumberSum(array, target);
//	for (int i = 0; i < 2; i++)
//	{
//		cout << " " << x.at(i) <<endl;
//	}
//
//	return 0;
//}