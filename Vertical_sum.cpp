class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        // add code here.
        map<int,int> mp;
        vector<int> ans;
        queue<pair<int,Node*>> q;
        q.push({0,root});
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            int lvl=front.first;
            Node* node=front.second;
            mp[lvl]+=node->data;
            if(node->left){
                q.push({lvl-1,node->left});
            }
            if(node->right){
                q.push({lvl+1,node->right});
            }
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
