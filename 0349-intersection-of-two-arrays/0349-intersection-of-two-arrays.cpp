class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        vector<int> ans;
        for(int num : nums2){
            int s=0,e=nums1.size()-1;
            while(s<=e){
                int m = s+(e-s)/2;
                if(nums1[m] == num){
                    if(find(ans.begin(),ans.end(),num) == ans.end()){
                        ans.push_back(num);
                    }
                    break;
                }
                else if(nums1[m]<num) s=m+1;
                else e=m-1;
            }
        }
        return ans;
    }
};