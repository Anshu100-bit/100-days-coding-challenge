class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxOnes = 0; 
        int rowIndex = -1; 
        int i = 0;
        int j = m - 1; 

        while (i < n && j >= 0) {
           if (arr[i][j] == 1) {
                maxOnes = j + 1;
                rowIndex = i; 
                j--; 
            } else {
                i++; 
            }
        }
         return rowIndex;
	}

};
