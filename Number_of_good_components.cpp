class Solution {
  public:
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        // code here
        int ans = 0;
        vector<vector<int>> adj(v+1);
        for(auto v:edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<int> vis(v+1, 0); // Ignore 0 index
        for(int i=1;i<=v;i++){
            if(!vis[i]){
                vector<int> path;
                DFS(adj, i, path, vis);
                int flag = 0;
                for(int n:path){
                    if(adj[n].size() != path.size()-1){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) ans++;
            }
        }
        return ans;
    }
    
    void DFS(vector<vector<int>> &adj, int src, vector<int> &path, vector<int> &vis){
        vis[src] = 1;
        path.push_back(src);
        for(int nbr:adj[src]){
            if(!vis[nbr]) DFS(adj, nbr, path, vis);
        }
    }
};
