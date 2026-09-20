class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = nums[0],a=-1,b=-1;
        for(int i=1;i<nums.size();i++){
            a = nums[i] - ans;
            b = max(b,a);
            ans = min(ans,nums[i]);
        }
        return b>0?b:-1;
    }
};