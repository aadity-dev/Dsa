class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int osum = n * n;
        int esum = n * (n + 1);
        return gcd(osum, esum);
    }
};