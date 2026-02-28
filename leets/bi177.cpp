class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int ,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        
        vector<int> k;
        for(auto &x : mp){
            k.push_back(x.first);
        }
        
        sort(k.begin(),k.end());
        
        for(int i = 0;i + 1<k.size();i++){
                if(mp[k[i] != mp[k[i+1]]]){
                    return {k[i],k[i + 1]};
                }
            }
        return {-1,-1};
    }
};©leetcode