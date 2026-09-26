class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        int i = 0, j = source.size()-1;
        int k = 0;
        while(i<j){
            int delta = source[i] + source[j];
            source[i] = source[i] + source[j] - delta;
            source[j] = delta;
            i++,j--;
        }
        long sum1 = 0;
        long sum2 = 0;
        for(int l=0;l<source.size();l++){
            sum1 += source[l];
        }
        for(int l=0;l<target.size();l++){
            sum2 += target[l];
        }
        if(sum1 == sum2)    return true;
        return false;
    }
};