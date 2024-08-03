class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp2;
        int n = s.size();
        int m = t.size();
        if(n != m)return false;
        for(int i = 0; i<n;i++){
            mpp[s[i]]++;
        }
        for(int i = 0; i<n;i++){
            if(mpp.find(t[i]) == mpp.end()){
                return false;
            }mpp2[t[i]]++;
        }
        for(int i = 0; i<n;i++){
            if(mpp[s[i]] != mpp2[s[i]]){
                return false;

            }
        }
        return true;
    }
};