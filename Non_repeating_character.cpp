class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
        int count[256] = {0};
    for (int i = 0; i < S.size(); i++)
    {
        count[S[i]]++;
    }
    for (int i = 0; i < S.size(); i++)
    {
        if (count[S[i]] == 1)
        {
            return S[i];
        }
    }
    return '$';
    }

};
