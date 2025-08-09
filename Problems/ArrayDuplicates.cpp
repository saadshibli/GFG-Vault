// Problem : Array Duplicates
// Source : https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&category=Arrays&difficulty=Basic,Easy,Medium&sortBy=submissions

class Solution {
    public:
        vector<int> findDuplicates(vector<int>& arr) {
            // code here
            unordered_map<int, int> f;
            vector<int> a;
            for(int n:arr) f[n]++;
            for(auto& n:f) if(n.second>=2) a.push_back(n.first);
            return a;
        }
};