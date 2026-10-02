class Solution {
public:
    int firstMatchingIndex(string s) {
        int ans = -1;
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i] == s[j]){
                ans = i;
                break;
            }
            else i++,j--;
        }
        return ans;
    }
};