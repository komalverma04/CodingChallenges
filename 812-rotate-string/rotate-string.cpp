class Solution {
public:
    bool rotateString(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        s = s+s;
         int n = s.size();
  int m = t.size();
  vector<int>lps(m,0);
  lps[0] = 0;
  int i = 1;
  int len = 0;
  while(i < m){
      if(t[i] == t[len]){
          len++;
          lps[i] = len;
          i++;
      }else{
          if(len != 0){
              len = lps[len-1];
          }else{
              len = 0;
              lps[i] = 0;
              i++;
          }
      }
  }
 
  i = 0;
  int j = 0;
  while(i<n && j<m){
      if(s[i] == t[j]){
          i++;
          j++;
          cout<<j<<" "<<m;
          if(j == m){
              return true;
              break;
          }
      }else{
          if(j != 0){
              j = lps[j-1];
          }else{
              i++;
          }
      }
  }
  return false;
    }
};