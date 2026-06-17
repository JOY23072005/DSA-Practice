class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prev = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=prev;
            prev = nums[i];
        }

        for(int i=0;i<n;i++){
            int leftSum = i==0?0:nums[i-1];
            int rightSum = nums[n-1] - nums[i];
            if(leftSum==rightSum){
                return i;
            }
        }
        return -1;
    }
};