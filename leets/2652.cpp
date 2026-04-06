class Solution {
public:
    int sumOfMultiples(int n) 
    {
        vector<int> nums;
        for(int i = 1;i<=n;i++){
            nums.push_back(i);
        }
        int sum = 0;
        for(int i = 1;i<=nums.size();i++){
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
                sum += i;
            }
        }
        return sum;
    }
};