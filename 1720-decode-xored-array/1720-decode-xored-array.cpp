class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector <int> arr;
        int ans = 0;
        arr.push_back(first);
        for(int i=0;i<encoded.size();i++){
            ans = first ^ encoded[i];
            arr.push_back(ans);
            first = ans;
        }
        return arr;
    }
};