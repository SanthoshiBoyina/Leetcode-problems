class Solution {
  public:
    string firstRepChar(string s) {
        string res = "";
        unordered_set<char> hs;
        for(int i=0; i<s.length(); i++) {
            if(hs.find(s[i]) != hs.end()) {
                res.push_back(s[i]);
                return res;
            }
            hs.insert(s[i]);
        }
        return "-1";
    }
};