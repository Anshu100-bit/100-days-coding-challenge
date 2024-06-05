class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
                int x;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        for(int i=0;i<m;i++)
        {
            sum2+=b[i];
        }
       int diff=sum1-sum2;
       if(diff%2!=0)
       {
           return -1;
       }
       
       int target=diff/2;
       unordered_set<int>setlf(b,b+m);
       
       for(int i=0;i<n;i++)
       {
           if(setlf.find(a[i]-target)!=setlf.end())
           {
               return 1;
           }
       }
        return -1;
    }
};
