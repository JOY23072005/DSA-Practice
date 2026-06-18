class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0,maxSum=INT_MIN;
        for(auto &it : nums){
            currSum+=it;
            maxSum=max(maxSum,currSum);
            if(currSum<0) //reset
                currSum=0;
        }
        return maxSum;
    }
};