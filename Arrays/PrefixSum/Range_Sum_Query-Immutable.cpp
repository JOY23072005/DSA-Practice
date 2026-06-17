class NumArray {
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        if(nums.size()==0) return;
        int prev = 0;
        for(int i=0;i<nums.size();i++){
            prev = prev + nums[i];
            prefixSum.push_back(prev);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return prefixSum[right];
        return prefixSum[right]-prefixSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */