class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax=1;
        int currMin=1;

        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                swap(currMax,currMin);
            }

            currMax=max(nums[i],currMax*nums[i]);
            currMin=min(nums[i],currMin*nums[i]);

            maxi = max(maxi,currMax);
        }
        return maxi;
    }
};