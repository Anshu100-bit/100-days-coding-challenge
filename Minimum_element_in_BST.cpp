class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if (root == nullptr) {
            return -1;
        }

        while (root->left != nullptr) {
            root = root->left;
        }

        return root->data;
    }
};
