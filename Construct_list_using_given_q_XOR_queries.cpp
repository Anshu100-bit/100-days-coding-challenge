class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
         vector<int>ans;
        ans.push_back(0);
        int xorr=0;
        for(auto x:queries){
            if(x[0])xorr^=x[1];
            else ans.push_back(xorr^x[1]);
        }
        for(int &x:ans) x^=xorr;
        sort(begin(ans),end(ans));
        return ans;
    }
};
