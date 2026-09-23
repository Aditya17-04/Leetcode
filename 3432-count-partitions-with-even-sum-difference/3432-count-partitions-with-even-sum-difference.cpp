class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans = 0;
        int left=0;
        int total=0;
        for(int i=0;i<nums.size();i++)  total+=nums[i]; 
        for(int i=1;i<nums.size();i++){
            left+=nums[i-1];
            int right = total - left;
            if(abs(right-left)%2==0) ans++;
        }
        return ans;
    }
};