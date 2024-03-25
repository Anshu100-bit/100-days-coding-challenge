class Solution{
    public:

    //Function to check if two arrays are equal or not.
     bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
       if (A.size() != B.size()) {
        return false;
    }

    // Sorting both arrays in ascending order
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Comparing corresponding elements of the sorted arrays
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            return false;
        }
    }
    return true;
    }
};
