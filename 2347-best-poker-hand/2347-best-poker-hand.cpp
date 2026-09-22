class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map <int,int> rankcnt;
        unordered_map <char,int> suitcnt;
        for(int i=0;i<5;i++){
            rankcnt[ranks[i]]++;
            suitcnt[suits[i]]++;
        }
        for(auto x : suitcnt){
            if(x.second == 5) return "Flush";
        }
        int maxcnt = 0;
        for(auto x : rankcnt){
            maxcnt = max(maxcnt,x.second);
        }
        if(maxcnt >= 3) return "Three of a Kind";
        if(maxcnt == 2) return "Pair";
        return "High Card";
    }
};