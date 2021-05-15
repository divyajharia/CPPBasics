#include "stdafx.h"
#include <vector>
#include<queue>
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

void BFS(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node* curr = q.front();
		cout << curr->node << " ";
		q.pop();
		cout << endl;
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
//	BFS(root);
// delete root;
//
//}
//Time complexity is theta(n)
//Auxillary Space is O(n) it is similar to width of the tree