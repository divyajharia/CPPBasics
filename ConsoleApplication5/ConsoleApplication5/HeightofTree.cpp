#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include<stdio.h>
#include <sstream>
using namespace std;

struct Node
{
	int node;
	Node* right;
	Node* left;

	Node(int val)
	{
		node = val;
		right = NULL;
		left = NULL;
	}
};

int heightoftree(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return max(heightoftree(root->left), heightoftree(root->right)) + 1;
	
}


//int main()
//{
//	Node* root = NULL;
//	//Node* root = new Node(5);
//	/*root->left = new Node(7);
//	root->left->left = new Node(9);
//	root->left->right = new Node(10);
//	root->right = new Node(15);*/
//	int count = heightoftree(root);
//	cout << "Height of tree : " << count << endl;
// delete root;
//}

//Time complexity is O(n)
//Auxillary Space is O(n) worst case , O(h+1) h = height of tree therefore Complexity O(h)