class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        
        int i = 0, j = 0;
        int k;
        
        while(i < n && j < m) {
            if(arr1[i] <= arr2[j]){
                    ans.push_back(arr1[i]);
                while(j < m && arr1[i] == arr2[j])
                    j++;
                k = i;
                while(arr1[k] == arr1[i]) 
                    k++;
                i = k;
            }
                
            else{
                  ans.push_back(arr2[j]);
                while(i < n && arr1[i] == arr2[j])
                    i++;
                k = j;
                while(arr2[k] == arr2[j]) 
                    k++;
                j = k;
            }
        }
        
        while(i < n){
            ans.push_back(arr1[i]);
                k = i;
                while(arr1[k] == arr1[i]) 
                    k++;
                i = k;
        }
            
        while(j < m) {
            ans.push_back(arr2[j]);
                k = j;
                while(arr2[k] == arr2[j]) 
                    k++;
                j = k;
        }
        
        return ans;
    }
};
