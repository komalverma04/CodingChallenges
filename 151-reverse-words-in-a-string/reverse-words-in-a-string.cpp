class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;string ans = "";
        while(i<n){
            while(i<n && s[i] == ' '){
                i++;
            }
            if(i>=n)break;
            cout<<i<<endl;
            int j = i;
            while(j<n && s[j] != ' '){
                j++;
            }
            
            string w = s.substr(i, j-i);
            cout<<"w = "<<w<<endl;
            if(ans == ""){
                ans = ans + w ;
            }else{
            ans = w + " " + ans;
            }i = j+1;
        }
        return ans;
    }
};