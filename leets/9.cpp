class Solution {
public:
    bool isPalindrome(int x) 
    { 
        if(x < 0) return false;
        
        long long sum = 0;
        int temp = x;
        while(x > 0){
            int r = x % 10;
            sum = sum * 10 + r;
            x = x / 10; 
        } 
        if(temp == sum){
            return true;
        }else{
            return false;
        }
        //return temp == sum;
    }
};