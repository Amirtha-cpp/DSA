class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size() + 1;
        int actual_sum = 0;
        
        for(int i = 0; i < arr.size(); i++){
            actual_sum += arr[i];
        }
        
        int expected_sum = n * (n + 1) / 2;
        
        return expected_sum - actual_sum;
    }
};