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

void Sizeoftree(Node* root)
{
    unsigned int count = 0;
    if (root == NULL)
    {
        cout << "Size of tree: " << count;
        return;
    }
    queue<Node*> q;
    
    q.push(root);
    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        count++;
      //  cout << curr->node << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }

    cout << "Size of tree: " << count ;

}


//int main()
//{
//	//Node* root = NULL;
//	Node* root = new Node(5);
//	root->left = new Node(7);
//	root->left->left = new Node(9);
//	root->left->right = new Node(10);
//	root->right = new Node(15);
//    Sizeoftree(root);
//	delete root;
//
//}
//Time complexity is O(n) (O(n+h) h is height numver of NUll that will be pushed
//Auxillary Space is O(n) it is similar to width of the tree