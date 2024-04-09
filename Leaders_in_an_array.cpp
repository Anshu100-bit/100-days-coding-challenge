class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> result;
        
        if (n == 0) {
            return result;
        }
        
        int max_right = a[n - 1]; 
        result.push_back(max_right);
        
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= max_right) {
                max_right = a[i];
                result.push_back(max_right);
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
