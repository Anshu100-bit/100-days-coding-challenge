class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    vector<int> countOddEven(int arr[], int sizeof_array)
    {
           int count=0;
           int check=0;
       for(int i=0; i<sizeof_array; i++){
           
           if(arr[i]%2==0){
              count++;
           }
           else{
              check++; 
           }
       }   
       
       vector<int> result = {check, count};
    
    // Return the vector
    return result;
       
    }
};
