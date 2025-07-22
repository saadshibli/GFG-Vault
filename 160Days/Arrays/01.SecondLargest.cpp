// source: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735

class Solution {
    public:
        int getSecondLargest(vector<int> &arr) {
            // code here
            int largest = INT_MIN;
            int sLargest = INT_MIN;
            for(int num : arr) {
                if(num > largest) {
                    sLargest = largest;
                    largest = num;
                } else if(num>sLargest && num!=largest) {
                    sLargest = num;
                }
            }
            return sLargest==INT_MIN?-1:sLargest;
        }
};