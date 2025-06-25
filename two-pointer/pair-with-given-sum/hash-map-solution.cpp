class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> hm;
        for(int i=0; i<arr.size(); i++) {
            int b = target - arr[i];
            if(hm[b] == 1)
                return true;
            hm[arr[i]]++;
        }
        return false;
        
    }
};