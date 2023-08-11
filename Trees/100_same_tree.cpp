/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
bool isCheckingLeftTree(TreeNode* leftNode,TreeNode* leftNode1){
    if(leftNode==NULL && leftNode1==NULL) return true;
    if(leftNode==NULL || leftNode1==NULL) return false;

    if(leftNode->val!=leftNode1->val) return false;

    return isCheckingLeftTree(leftNode->left,leftNode1->left);
}

bool isCheckingRightTree(TreeNode* RightNode,TreeNode* RightNode1){
    if(RightNode==NULL && RightNode1==NULL) return true;
    if(RightNode==NULL || RightNode1==NULL) return false;

    if(RightNode->val!=RightNode1->val) return false;

    return isCheckingRightTree(RightNode->right,RightNode1->right);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

        if(p->val!=q->val) return false;

       return isCheckingLeftTree(p->left,q->left)&&isCheckingRightTree(p->right,q->right);
    }
};

// Better Approach

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL || p->val!=q->val) return false;

        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);

       
    }
};