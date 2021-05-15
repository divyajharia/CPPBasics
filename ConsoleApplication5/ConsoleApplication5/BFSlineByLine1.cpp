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

void BFSLine1(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while (q.size()>1)
	{
		Node* curr = q.front();
		q.pop();
		if (curr == NULL)
		{
			cout << endl;
			q.push(NULL);
			continue;
		}
		cout << curr->node << " ";
		if (curr->left != NULL)
		{
			q.push(curr->left);
		}
		if (curr->right != NULL)
		{
			q.push(curr->right);
		}
	}


}


//int main()
//{
//	//Node* root = NULL;
//	Node* root = new Node(5);
//	root->left = new Node(7);
//	root->left->left = new Node(9);
//	root->left->right = new Node(10);
//	root->right = new Node(15);
//	BFSLine1(root);
//	delete root;
//
//}
//Time complexity is O(n) (O(n+h) h is height numver of NUll that will be pushed
//Auxillary Space is O(n) it is similar to width of the tree