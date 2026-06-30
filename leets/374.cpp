class Solution {
public:
    int guessNumber(int n) 
    {
    int l = 1;
    int h = n;
    while(l<=h)
    {
        int mid = (l + h)/2;
        int res=guess(mid);
        if(res == 0)
        {
            return mid;
        }else if (res > 0)
        {
            l = mid + 1;
        }else
        {
            h = mid - 1;
        }   
    }
    return -1;
    }
};