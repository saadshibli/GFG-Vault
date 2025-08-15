// Problem : Move All Zeroes To End
// Source : https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

class Solution {
    public:
        void pushZerosToEnd(vector<int>& arr) {
            // code here
            int indexZero=0;
            for(int i=0; i<arr.size(); i++) {
                if(arr[i]!=0) swap(arr[indexZero++],arr[i]);
            }
        }
};