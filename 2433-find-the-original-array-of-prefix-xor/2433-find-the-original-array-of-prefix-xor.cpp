class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector <int> arr;
        int ans = 0;
        arr.push_back(pref[0]);
        for(int i=0;i<pref.size()-1;i++){
            ans = pref[i] ^ pref[i+1];
            arr.push_back(ans);
        }
        return arr;
    }
};