class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int sum =0;
        int maxi=INT_MIN;
        unordered_map<int,int> hash;
        hash[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;
            if(hash.count(sum)){
                maxi=max(maxi,i-hash[sum]);
            }else{
                hash[sum]=i;
            }
        }
        return maxi<0?0:maxi;
    }
};