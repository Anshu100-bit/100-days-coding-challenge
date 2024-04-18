class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
         vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n+2;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==2){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
