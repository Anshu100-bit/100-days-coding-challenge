class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
         int ans = INT_MAX;
        int cnt = 1;
        int res;
        
        for(auto iter : a){
            int val = count(iter.begin(),iter.end(),1);
            if(val < ans){
                ans = val;
                res = cnt;
            }
            cnt++;
             
        }
        return res;
    }
};
