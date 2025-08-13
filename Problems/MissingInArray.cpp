// Problem : Missing in Array
// Source : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size()+1;
        long long sum = n*(n+1)/2;
        long long s=0;
        for(int a:arr) s+=a;
        return sum-s;
    }
};