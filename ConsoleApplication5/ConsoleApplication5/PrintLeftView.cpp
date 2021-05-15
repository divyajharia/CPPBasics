#include "stdafx.h"
#include <vector>
#include<queue>
#include <iostream>
#include <string>
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

//void printLeftView(Node* root)
//{
//	
//	printLeftView(root->left);
//
//
//}


//int main()

//{
//	//Node* root = NULL;
//	Node* root = new Node(5);
//	root->left = new Node(7);
//	root->left->left = new Node(9);
//	root->left->right = new Node(10);
//	root->right = new Node(15);
//	printLeftView(root);
//	delete root;
//
//}
//Time complexity is O(n) (O(n+h) h is height numver of NUll that will be pushed
//Auxillary Space is O(n) it is similar to width of the tree