class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        
        if(a.size() != b.size())
        return false;
        
        unordered_map<int,int> mppa;
        for(int i = 0; i < a.size(); i++){
            mppa[a[i]]++;
        }
        
        unordered_map<int,int> mppb;
        for(int i = 0; i < b.size(); i++){
            mppb[b[i]]++;
        }
        
        if (mppa == mppb)
        return true;
        else
        return false;
    }
};