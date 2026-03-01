class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {  
        unordered_map<char, int> mp;
        for(char c : allowed) {
            mp[c]++;
        }
        int cnt = 0;
        for(string s : words) {
            bool valid = true;
            for(char c : s) {
                if(mp.find(c) == mp.end()) {
                    valid = false;
                    break;
                }
            }
            if(valid) cnt++;
        }
        return cnt;
    }
};