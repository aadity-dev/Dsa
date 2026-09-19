class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int total_Time = arrivalTime + delayedTime;
        if(total_Time == 24){
            return 0;
        }else if(total_Time > 24){
            return total_Time - 24;
        }else{
            return total_Time;
        }    
    }
};