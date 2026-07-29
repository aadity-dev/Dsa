
class Solution {
public:
    bool checkRecord(string s) {
        int cnta = 0;
        int cntl = 0;
        for (char c : s) {
            if (c == 'A') {
                cnta++;
                if (cnta >= 2) return false; 
            }
            if (c == 'L') {
                cntl++;
                if (cntl >= 3) return false;
            } else {
                cntl = 0; 
            }
        }  
        return true;
    }
};
