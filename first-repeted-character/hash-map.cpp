class Solution {
  public:
    string firstRepChar(string s) {
        string res = "";
        unordered_map<char, int> hm;
        for(int i=0; i<s.length(); i++) {
            if(hm.find(s[i]) != hm.end()) {
                res.push_back(s[i]);
                return res;
            }
            hm[s[i]]++;
        }
        return "-1";
    }
};