class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0;
        vector<int> a = heights;
        sort(a.begin(),a.end());
        vector<int> expected = a;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != expected[i]) cnt++;
        }
        return cnt;
    }
};