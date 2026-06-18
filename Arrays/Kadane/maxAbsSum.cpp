class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMax=0;
        int currMin=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            currMax = max(nums[i],currMax+nums[i]);
            maxi = max(maxi,currMax);

            currMin = min(nums[i],currMin+nums[i]);
            mini = min(mini,currMin);
        }
        if(maxi<0){
            maxi=-maxi;
        }
        if(mini<0){
            mini=-mini;
        }
        return maxi>mini?maxi:mini;
    }
};