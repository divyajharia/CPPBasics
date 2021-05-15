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

void BFSLine2(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		int size = q.size();	
		for (int i = 0; i < size; i++)
		{
			Node* curr = q.front();
			q.pop();
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
		cout << endl;
	}


}


int main()
{
	//Node* root = NULL;
	Node* root = new Node(5);
	root->left = new Node(7);
	root->left->left = new Node(9);
	root->left->right = new Node(10);
	root->right = new Node(15);
	BFSLine2(root);
	delete root;

}
//Time complexity is O(n) (O(n+h) h is height numver of NUll that will be pushed
//Auxillary Space is O(n) it is similar to width of the tree