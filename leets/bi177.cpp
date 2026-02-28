class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        unordered_map<int,int> freq;
        for (int v : nums) freq[v]++;

        vector<int> vals;
        for (auto &e : freq)
            vals.push_back(e.first);

        sort(vals.begin(), vals.end());

        int n = vals.size();

        for (int i = 0; i < n; i++) {
            int f = freq[vals[i]];
            int j = i + 1;

            while (j < n && freq[vals[j]] == f)
                j++;

            if (j < n)
                return {vals[i], vals[j]};
        }

        return {-1, -1};
    }
};
// class Solution {
//     public:
//         vector<int> minDistinctFreqPair(vector<int>& nums) {
//                     unordered_map<int,int> mp;
//                     for(int x : nums) mp[x]++;
//                     vector<int> k;
//                     for(auto &p : mp)
//                         k.push_back(p.first);
//                     sort(k.begin(), k.end());
//                     int minFreq = INT_MAX;
//                     for(auto &p : mp)
//                         minFreq = min(minFreq, p.second);
//                     int minFreqVal = INT_MAX;
//                     for(int x : k) {
//                         if(mp[x] == minFreq) {
//                             minFreqVal = x;
//                                 break;
//                            }
//                     }
//                     for(int x : k) {
//                         if(mp[x] != minFreq)
//                             return {x, minFreqVal};
//                     }
//                     return {-1,-1};
//         }
// };



// class Solution {
// public:
//     vector<int> minDistinctFreqPair(vector<int>& nums) {
//         unordered_map<int ,int> mp;
//         for(int num : nums){
//             mp[num]++;
//         }
        
//         vector<int> k;
//         for(auto &x : mp){
//             k.push_back(x.first);
//         }
        
//         sort(k.begin(),k.end());
        
//         for(int i = 0;i + 1<k.size();i++){
//                 if(mp[k[i] != mp[k[i+1]]]){
//                     return {k[i],k[i + 1]};
//                 }
//             }
//         return {-1,-1};
//     }
// };

