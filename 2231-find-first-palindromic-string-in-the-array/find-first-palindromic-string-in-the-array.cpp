class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string i:words){
            string j=i;
            reverse(j.begin(),j.end());
            if(i==j){
                return i;
            }
        }
        return "";
    }
};