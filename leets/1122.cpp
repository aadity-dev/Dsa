class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> freq;
        for(int num : arr1) {
        freq[num]++; 
        }
        
        vector<int> ans;
        for (int i = 0; i < arr2.size(); i++) {
            int current_element = arr2[i];

            while (freq[current_element] > 0) {
                ans.push_back(current_element);

                freq[current_element]--;
        }
    }
    for (auto const& [num, count] : freq) {
            int remaining_count = count;
            while (remaining_count > 0) {
                ans.push_back(num);
                remaining_count--;
            }
        }
    return ans;
    }
};