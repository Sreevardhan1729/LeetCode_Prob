class Solution {
public:
    static bool cmp(const std::pair<char, int> &a, const std::pair<char, int> &b) {
    return a.second > b.second;
}
    string frequencySort(string s) {
        int len=s.length();
        vector<pair<char,int>> vp;
        sort(s.begin(),s.end());
        int j=1;
        for(int i=1;i<len;i++){
            if(s[i-1]==s[i]){
                j++;
            }
            else{
                vp.push_back({s[i-1],j});
                j=1;
            }
        }
        string s1="";
        vp.push_back({s[len-1],j});
        sort(vp.begin(),vp.end(),cmp);
        for(auto i:vp){
            while(i.second--){
                s1+=i.first;
            }
        }
        return s1;
    }
};