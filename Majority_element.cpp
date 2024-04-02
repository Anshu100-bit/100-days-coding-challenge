class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n){
        int x = a[0];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == x)
                count++;
            else
                count--;

            if (count == 0) {
                x = a[i];
                count = 1;
            }
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == x)
                count++;
        }

        if (count > n / 2)
            return x;
        else
            return -1;
     }
};
