/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> ans;
        stack<pair<Node*, vector<int>>> st;
        st.push({root, {}});

        while (!st.empty()) {
            auto x = st.top();
            Node* node=x.first;
            vector<int> path=x.second;
            st.pop();

            if (node != nullptr) {
                path.push_back(node->data);

                if (node->left == nullptr && node->right == nullptr) {
                    ans.push_back(path);
                } else {
                    st.push({node->right, path});
                    st.push({node->left, path});
                }
            }
        }

        return ans;
    }
};
