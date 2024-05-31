class Solution {
  public:
    int swapNibbles(int n) {
        // code here
         int left = n>>4;
        int right = n & (15);
        return (right*16 + left);
    }
};
