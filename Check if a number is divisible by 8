class Solution{
    public:
    int DivisibleByEight(string s){
        int n = s.length();
        
        if (n == 1) {
            return ((s[0] - '0') % 8 == 0) ? 1 : -1;
        } else if (n == 2) {
            return (((s[0] - '0') * 10 + (s[1] - '0')) % 8 == 0) ? 1 : -1;
        }
        int num = (s[n - 3] - '0') * 100 + (s[n - 2] - '0') * 10 + (s[n - 1] - '0');
        if (num % 8 == 0) {
            return 1;
        }
        
        return -1;
    }
};
