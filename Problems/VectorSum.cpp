// Problem : Vector Sum
// Source : https://www.geeksforgeeks.org/problems/vector-sum/1?page=3&sortBy=accuracy

// Complete the function
int sumMe(vector<int> arr, int n) {
    // Your code here
    int initialSum = 0;
    int sum = accumulate(arr.begin(), arr.end(), initialSum);
    return sum;
}