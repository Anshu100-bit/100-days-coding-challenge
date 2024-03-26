class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
         int temp=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]<temp){
                temp=arr[i];
            }
        }
        return temp;
    }
};
