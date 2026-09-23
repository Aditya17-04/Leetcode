class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result;
        for(int i=0;i<candies.size();i++){
            int ans = candies[i] + extraCandies;
            int ans1 = *max_element(candies.begin(),candies.end());
            if(ans>=ans1) result.push_back(true);
            else result.push_back(false); 
        }
        return result;
    }
};