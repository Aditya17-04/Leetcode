class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        string ans1="";
        string ans2="";
        string category="";
        long long volume = 1LL * length * width * height;
        if(volume>=pow(10,9) || length>=pow(10,4) || width>=pow(10,4) || height>=pow(10,4) || mass>=pow(10,4))  ans1+="Bulky";
        if(mass>=100)   ans2+="Heavy";
        if(ans1 == "Bulky" && ans2 == "Heavy")  category+="Both";
        else if(ans1 == "Bulky" && ans2 !="Heavy" ) category+="Bulky";
        else if(ans1 != "Bulky" && ans2 =="Heavy" ) category+="Heavy";
        else category+="Neither";
        return category;
    }
};