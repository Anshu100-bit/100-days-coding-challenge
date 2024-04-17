class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
         set<int>s(arr,arr+n);
        int count = 0;
        for(int i=1; ; i++){
            if(s.find(i)==s.end()){
                return i;
            }
            count++;
            if(count == n){
                count = n+1;
                break;
            }
            }
    return count;
    } 
};
