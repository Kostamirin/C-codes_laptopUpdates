// Created by kley-muner on 2/23/25.
#include <vector>
#include <algorithm>
#include <iostream>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
using namespace std;
class Solution {
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        return buildTree(preorder, postorder);
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& postorder) {
        if (preorder.empty() || postorder.empty()) return nullptr;
        
        TreeNode* root = new TreeNode(preorder[0]);
        if (preorder.size() == 1) return root;
        
        int leftRootVal = preorder[1];
        int leftRootIndex = find(postorder.begin(), postorder.end(), leftRootVal) - postorder.begin();
        
        vector<int> leftPreorder(preorder.begin() + 1, preorder.begin() + leftRootIndex + 2);
        vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftRootIndex + 1);
        
        vector<int> rightPreorder(preorder.begin() + leftRootIndex + 2, preorder.end());
        vector<int> rightPostorder(postorder.begin() + leftRootIndex + 1, postorder.end() - 1);
        
        root->left = buildTree(leftPreorder, leftPostorder);
        root->right = buildTree(rightPreorder, rightPostorder);
        
        return root;
    }
};
