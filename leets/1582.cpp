class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(mat[i][j] == 1) {

                    bool ok = true;

                    // check row
                    for(int k = 0; k < n; k++) {
                        if(k != j && mat[i][k] == 1) {
                            ok = false;
                            break;
                        }
                    }

                    // check column
                    for(int k = 0; k < m && ok; k++) {
                        if(k != i && mat[k][j] == 1) {
                            ok = false;
                            break;
                        }
                    }

                    if(ok) ans++;
                }
            }
        }

        return ans;
    }
};