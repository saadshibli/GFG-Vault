// Problem : Multiply Array
// Source : https://www.geeksforgeeks.org/problems/multiply-array-1658312632/1?page=1

class Solution {
  public:
    int product(int arr[], int n) {
        int prod=1;
        for(int i=0; i<n; i++) prod*=arr[i];
        return prod;
    }
};