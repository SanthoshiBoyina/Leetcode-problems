class Solution {
  public:
    string firstRepChar(string str) {
        vector<int> count (26, 0);
        string res = "";
        for(int i=0; i<str.length(); i++) {
            if(count[str[i] - 'a'] == 1) {
                res.push_back(str[i]);
                return res;
            }
            count[str[i] - 'a']++;
        }
        return "-1";
    }
};