class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector <int> ans;
        unordered_map <int,int> mp;
        for(int x : nums) mp[x]++;
        for(auto i : mp) if(i.second < 2)    ans.push_back(i.first);
        return ans;
    }
};