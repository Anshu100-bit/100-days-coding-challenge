class Solution {
  int mod = 1e9 + 7;
  public:
    int countWays(string s1, string s2) {
        int m = s2.size();
        vector<int> ways(m+1, 0);
        ways[0] = 1;
        map<char, vector<int>> lookup;
        for(int i = m; i > 0; i--) lookup[s2[i-1]].push_back(i);
        for(auto c : s1)
            for(int i : lookup[c]) ways[i] = (ways[i] + ways[i-1]) % mod;
        return ways[m];
    }
};
