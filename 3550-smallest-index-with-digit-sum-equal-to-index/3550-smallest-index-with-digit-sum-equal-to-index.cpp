class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = -1;
        for(int i=0;i<nums.size();i++){
            int a = 0;
            while(nums[i]>0){
                int digit = nums[i] % 10;
                a += digit;
                nums[i] = nums[i] / 10;
            }
            if(a == i){
                ans = i;
                break;
            }
        }
        return ans;
    }
};