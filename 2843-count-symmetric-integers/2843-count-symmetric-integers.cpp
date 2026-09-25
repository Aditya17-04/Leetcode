class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i=low;i<=high;i++){
            string s = to_string(i);
            if(s.size()%2!=0)   continue;
            int n = s.size()/2;
            int left = 0;
            int right = 0;
            for(int i=0;i<n;i++){
                left += s[i] - '0';
            }
            for(int i=n;i<s.size();i++){
                right += s[i] - '0';
            }
            if(left == right) count++;
        }
        return count;
    }
};