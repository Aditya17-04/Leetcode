class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int a = nums[i];
            int b = i+1;
            if(n%b==0){
                ans += a*a; 
            }
        }
        return ans;
    }
};