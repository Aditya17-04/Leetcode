class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        while(n>0){
            int digit = n % k;
            ans += digit;
            n /= k;
        }
        return ans;
    }
};