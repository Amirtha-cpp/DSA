class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
      
      
      unordered_map<int,int> hmp;
      for(int i = 0 ; i < arr.size() ; i++){
          hmp[arr[i]]++;
      }
      
      vector<int> ans;
      for(int i = 1 ; i <= arr.size() ; i ++){
          ans.push_back(hmp[i]);
      }
      
      return ans;
       
    }
};