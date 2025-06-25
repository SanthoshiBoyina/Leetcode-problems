class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> hs;
        for(int i=0; i<arr.size(); i++) {
            int b = target - arr[i];
            if(hs.find(b) != hs.end()) {
                return true;
            }
            hs.insert(arr[i]);
        }
        return false;
        
    }
};