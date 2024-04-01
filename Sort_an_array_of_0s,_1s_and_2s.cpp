class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
    int low = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
 
        case 0:
            swap(a[low++], a[mid++]);
            break;
 
        case 1:
            mid++;
            break;
 
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
    }
  void printArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}
};
