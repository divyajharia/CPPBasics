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

void inorder(Node * root)
{
	if (root == NULL)
		return; 

	inorder(root->left);
	inorder(root->right);
	cout << root->node << endl;
}


//int main()
//{
//	Node* root = new Node(5);
//	root->left = new Node(7);
//	root->left->left = new Node(9);
//	root->left->right = new Node(10);
//	root->right = new Node(15);
//	inorder(root);
// delete root;
//}

//Time complexity is O(n)
//Auxillary Space is O(n) worst case , O(h+1) h = height of tree therefore Complexity O(h)