class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        for(int i=1; i<a.size()-1; i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                return a[i];
            }
        }
        return a[a.size()-1];
    }
};
