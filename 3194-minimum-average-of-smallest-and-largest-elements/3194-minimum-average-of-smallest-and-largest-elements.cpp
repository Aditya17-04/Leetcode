class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <float> average;
        int i=0,j=nums.size()-1;
        while(i<j){
            float a = (nums[i]+nums[j])/2.0;
            average.push_back(a);
            i++,j--;
        }
        return *min_element(average.begin(),average.end());
    }
};