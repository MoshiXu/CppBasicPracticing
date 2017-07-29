#include<iostream>
#include <unordered_map>
using namespace std;

/**
* Definition for a binary tree node.
*/
struct TreeNode 
{
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root)
{
	/*If tree is empty then return 0*/
	if (root == NULL)
		return 0;
	else
	{
		int lmaxDepth = maxDepth(root->left);
		int rmaxDepth = maxDepth(root->right);

		if (lmaxDepth > rmaxDepth)
			return (lmaxDepth + 1);
		else
			return (rmaxDepth + 1);
	}
	/*2. Else
		(a) Get the max depth of left subtree recursively  i.e.,
		call maxDepth(tree->left - subtree)
		(a) Get the max depth of right subtree recursively  i.e.,
		call maxDepth(tree->right - subtree)
		(c) Get the max of max depths of left and right
		subtrees and add 1 to it for the current node.
		max_depth = max(max dept of left subtree,
			max depth of right subtree)
		+ 1
		(d)Return max_depth
	*/
};
