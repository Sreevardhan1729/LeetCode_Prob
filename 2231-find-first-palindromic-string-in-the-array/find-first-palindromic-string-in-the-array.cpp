class Solution {
    static bool check(string s){
        int len=s.length()-1;
        for(int i=0;i<(len+1)/2;i++){
            if(s[i]!=s[len-i]){
                return false;
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(string i:words){
            if(check(i)){
                return i;
            }
        }
        return "";
    }
};