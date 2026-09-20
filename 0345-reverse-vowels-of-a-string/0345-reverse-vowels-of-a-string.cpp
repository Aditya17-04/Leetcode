class Solution {
public:
    bool vowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string reverseVowels(string s) {
        int i=0,j=s.length();
        while(i<j){
            while(i<j && !vowel(s[i]))  i++;
            while(i<j && !vowel(s[j]))  j--;
            if(i<j){
                swap(s[i],s[j]);
                i++,j--;
            }
        }
        return s;
    }
};