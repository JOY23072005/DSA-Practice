class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        vector<int> hash(k, 0);
        int count =0;
        int n = nums.size();
        hash[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem = (sum%k+k)%k;
            if(hash[rem]){
                count+=hash[rem];
            }
            hash[rem]++;
        }
        return count;
    }
};