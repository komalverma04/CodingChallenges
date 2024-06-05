class Solution {
    bool is_alpha(char ch){
        if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90) || (ch >= 48 && ch <= 57)){
            return true;
        }
        return false;
    }
    int solve(string s, int i, int j){
        while(i < j){
            if(s[i] == s[j]){
                i++; j--;
            }else{
                return 0;
                break;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string str = "";
        for(int i = 0; i < n;i++){
            if(is_alpha(s[i])){
                cout<<s[i]<<endl;
                str.push_back(tolower(s[i]));
            }
        }
        cout<<str<<endl;
        return solve(str, 0, str.size()-1);
    }
};