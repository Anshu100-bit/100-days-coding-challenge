class Solution {
  public:
    int findPosition(int N) {
        // code here
    if (N == 0 || (N & (N - 1)) != 0) {
        return -1;
    }

    int position = 0;
    while (N != 0) {
        N >>= 1;
        position++;
    }
    return position;   
    }   
};
