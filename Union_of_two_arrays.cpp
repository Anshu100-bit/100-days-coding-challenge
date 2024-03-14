class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        set<int> s;
    // Remove the duplicates from a[]
    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
    }
 
    // Remove duplicates from b[]
    for (int i = 0; i < m; i++) {
        s.insert(b[i]);
    }
 
    return s.size();
    }
};
