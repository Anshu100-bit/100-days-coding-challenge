class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
         int input[n];
    
        for(int i = 0; i<n; i++){
            int data = abs(k-arr[i]);
            input[i] = data;
        }
    
        int mini = *min_element(input, input + n);
        int count;
        for(int i = 0; i<n; i++){
            if(mini == input[i]){
                count = i;
            }
        }
        
        return arr[count];
    } 
};

