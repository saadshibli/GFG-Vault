// Problems : Check if Arrays are Permutations
// Source : https://www.geeksforgeeks.org/problems/check-if-arrays-are-permutations/1?page=1&sortBy=accuracy

bool isArr2PermutationOfArr1(vector<int>& arr1, vector<int>& arr2) {
    // Your code here
    vector<int> ans;
    bool a = true;
    for(int i=0; i<arr2.size(); i++) {
        ans.push_back(arr2[arr2[i]-1]);
    }
    for(int i=0; i<ans.size(); i++) {
        if(arr1[i]!=ans[i]) {
            a=false;
            break;
        }
    }
    return a;
}