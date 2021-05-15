#include "stdafx.h"
#include <vector>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	// Write your code here.

	auto it = sequence.begin();
	auto it1 = array.begin();
	while (it != sequence.end())
	{
		it1 = find(it1, array.end(), *it);
		if (it1 != array.end())
		{
			it++;
			it1++;
			continue;
		}
		else
			return false;
		
	}
			return true;
}

int main(void)
{
	vector<int> array{ 5, 1, 22, 25, 6, -1, 8, 10 };
	vector<int> array1{ 1, 6, -1, -1, 10 };
	int target = 9;

	isValidSubsequence(array, array1);
	

	return 0;
}