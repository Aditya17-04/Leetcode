class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0,j=colors.size()-1;
        while(colors[i]==colors[j]) j--;
        int ans1 = j-i;
        i=0;j=colors.size()-1;
        while(colors[i]==colors[j]) i++;
        int ans2 = j-i;
        return max(ans1,ans2);
    }
};