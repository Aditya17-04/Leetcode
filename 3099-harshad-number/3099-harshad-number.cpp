class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans = 0;
        int b = x;
        while(b>0){
            ans += b%10;
            b /= 10; 
        }
        if(x%ans == 0)  return ans;
        return -1;
    }
};