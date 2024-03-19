class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here

    if (a.length() != b.length()) {
        return false;
    }

    unordered_map<char, int> freqA;
    unordered_map<char, int> freqB;

    for (char c : a) {
        freqA[c]++;
    }

    for (char c : b) {
        freqB[c]++;
    }

    return freqA == freqB;
}
};
