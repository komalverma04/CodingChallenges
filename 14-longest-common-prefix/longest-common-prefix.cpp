class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        if(n == 1){
            if(strs[0].size() != 0){
                return strs[0];
            }
            return ans;
            }
        int i = 0;
        while(true){
            bool flag = true;
            char ch = strs[0][i];

            for(auto str : strs){
                if( i == str.size()){
                    return ans;
                }
                if(str.size() == 0){
                    return "";
                }
                if(ch != str[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(ch);
            }else{
                return ans;
                break;
            }
            i++;
        }
        return ans;

    }
};