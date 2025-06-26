class Solution {
public:

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> hm;
        vector<int> res;

        for(int i=0; i<k; i++) {
            hm[nums[i]]++;
        }
        res.push_back(hm.rbegin()->first);
        
        for(int i=k; i<nums.size(); i++) {
            hm[nums[i]]++;
            if(hm[nums[i-k]] > 1)
                hm[nums[i-k]]--;
            else 
                hm.erase(nums[i-k]);
            res.push_back(hm.rbegin()->first);
        }
        return res;
        
    }
};