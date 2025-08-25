/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    // Helper function with range limits
    bool helper(Node* root, long long minVal, long long maxVal) {
        if (!root) return true;

        if (root->data <= minVal || root->data >= maxVal) {
            return false;
        }

        // Left subtree must be < root->data
        // Right subtree must be > root->data
        return helper(root->left, minVal, root->data) &&
               helper(root->right, root->data, maxVal);
    }

    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};
