class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector <int> arr;
        int ans = 0;
        arr.push_back(pref[0]);
        for(int i=1;i<pref.size();i++){
            ans = pref[i] ^ pref[i-1];
            arr.push_back(ans);
        }
        return arr;
    }
};