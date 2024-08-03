class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size(); string ans = "";
        string first =  strs[0];
        string second = strs[n-1];
        for(int i = 0; i< min(first.size(), second.size()); i++){
            if(first[i] != second[i]){
                return ans;
            }
            ans = ans + first[i];
        }
        return ans;                         
    }
};