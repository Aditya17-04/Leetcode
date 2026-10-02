class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <float> average;
        int i=0,j=nums.size()-1;
        while(i<j){
            float a = (nums[i]+nums[j])/2.0;
            average.push_back(a);
            i++,j--;
        }
        unordered_set <float> st;
        for(int i=0;i<average.size();i++){
            st.insert(average[i]);
        }
        return st.size();
    }
};