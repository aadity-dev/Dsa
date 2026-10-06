class Solution {
public:
    int minAddToMakeValid(string s) {
        int openC = 0;
        int remC = 0;
        for(char ch : s){
            if(ch == '('){
                openC++;
            }else{
                if(openC > 0){
                    openC--;
                }else{
                    remC++;
                }
            }
        }
        return openC + remC;
    }
};