class Solution {
public:

    bool checkbit(int n, int i) {
        return (n >> i) & 1;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        for(int i=0; i<(1 << n); i++) {
            vector<int> temp;
            for(int j=0; j<n; j++) {
                if(checkbit(i, j))
                    temp.push_back(nums[j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};