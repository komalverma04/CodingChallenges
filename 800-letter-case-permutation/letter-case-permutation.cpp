class Solution {
    bool is_num(char c){
        if(c >= 48 && c <= 57)return true;
        return false;
    }
    void solve(vector<string>& ans, string output, string s, int i){
    if(i == s.length()){
        ans.push_back(output);
        return;
    }
    if( is_num(s[i])){
        cout<<s[i]<<output<<endl;
       string output1 = output;
        output1.push_back(s[i]);
        solve(ans, output1, s, i+1);
    }else{
        
    string output1 = output;
    string output2 = output;
    output1.push_back(tolower(s[i]));
    
    output2.push_back(toupper(s[i]));
    
    solve(ans, output1, s, i+1);
    solve(ans, output2, s, i+1);
    }
    return;
}
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
    string output = "";
    solve(ans, output, s, 0);
    return ans;
    }
};