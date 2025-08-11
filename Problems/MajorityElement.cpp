// Problem : Majority Element
// Source : https://www.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&category=Arrays&difficulty=Basic,Easy,Medium&sortBy=submissions

class Solution {
    public:
        int majorityElement(vector<int>& arr) {
            // code here
            int n=arr.size()/2;
            unordered_map<int,int> freq;
            for(int a:arr) freq[a]++;
            for(auto& f:freq) {
                if(f.second>n) return f.first;
            }
            return -1;
        }
};