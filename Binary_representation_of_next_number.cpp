class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here
        string trim="";
        int i=0;
        while(i<s.size() && s[i]=='0') i++;
        while(i<s.size()) { trim.push_back(s[i]); i++;}
        s=trim;
        i=s.size()-1;
        while(i>=0 && s[i]!='0')
        {
            s[i]= '0';
            i--;
        }
        if(i<0) return '1' + s;
        s[i]= '1';
        return s;
    }
};
