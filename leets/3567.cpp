
class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();

        // 🔥 Edge case
        if (k == 1) {
            return vector<vector<int>>(n, vector<int>(m, 0));
        }

        vector<vector<int>> ans(n - k + 1, vector<int>(m - k + 1));

        for (int i = 0; i <= n - k; i++) {
            for (int j = 0; j <= m - k; j++) {

                vector<int> temp;

                for (int x = i; x < i + k; x++) {
                    for (int y = j; y < j + k; y++) {
                        temp.push_back(grid[x][y]);
                    }
                }

                sort(temp.begin(), temp.end());

                int minDiff = INT_MAX;
                for (int t = 0; t < temp.size() - 1; t++) {
                    minDiff = min(minDiff, temp[t+1] - temp[t]);
                }
                ans[i][j] = minDiff;
            }
        }

        return ans;
    }
};