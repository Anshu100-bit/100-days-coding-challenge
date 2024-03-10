class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    unordered_set<char> uset; // to store unique characters
        string result = ""; // to store the result

    for (int i = 0; i < str.length(); i++) {
        if (uset.find(str[i]) == uset.end()) {
            // if character is not present in uset
            uset.insert(str[i]); // insert into uset
            result += str[i]; 
        }
    }

    return result;
	    
	}
};
