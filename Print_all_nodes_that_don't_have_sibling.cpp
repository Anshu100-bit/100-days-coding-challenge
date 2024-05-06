//User function Template for C++

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

vector<int> noSibling(Node* node)
{
    // code here
    vector<int> ans;
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front->left){
            q.push(front->left);
        }
        if(front->right)
            q.push(front->right);
        if(front->left && !front->right)
            ans.push_back(front->left->data);
        if(front->right && !front->left)
            ans.push_back(front->right->data);
    }
    if(ans.size() == 0)
        return {-1};
    sort(ans.begin(),ans.end());
    return ans;
}
