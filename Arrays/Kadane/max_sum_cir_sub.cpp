class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // maxSubarray ->case1
        // maxCurSum = total - minSubarraySum ->case2

        int n=nums.size();
        int currSum1=0;
        int maxi=INT_MIN;
        int currSum2=0;
        int mini=INT_MAX;
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];

            //traditional kadane
            currSum1+=nums[i];
            maxi=max(maxi,currSum1);
            if(currSum1<0) currSum1=0;

            //reverse of kadane
            currSum2+=nums[i];
            mini=min(mini,currSum2);
            if(currSum2>0)currSum2=0;
        }

        //edge case where all -ve & maxsubarry>maxCirSum
        if(total-mini==0 || maxi>total-mini){
            return maxi;
        }

        return (total-mini);
    }
};