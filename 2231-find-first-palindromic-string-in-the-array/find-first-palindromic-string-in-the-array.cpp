class Solution {
    static bool check(string s){
        int i=0,j=s.length()-1;
        while(i<j && s[i]==s[j]){
            i++;
            j--;
        }
        return i>=j;
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