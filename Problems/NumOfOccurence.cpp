// Problem : Number of occurrence
// Source : https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?page=2&category=Arrays&difficulty=Basic,Easy,Medium&sortBy=submissions

class Solution {
    public:
        int countFreq(vector<int>& arr, int target) {
            // code here
            int count = 0;
            for(int n:arr) if(n==target) count++;
            return count;
        }
};
