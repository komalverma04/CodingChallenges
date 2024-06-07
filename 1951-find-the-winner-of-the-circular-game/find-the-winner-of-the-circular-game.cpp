class Solution {
    void solve(vector<int>& arr, int n, int k, int i){
        if(n == 1) {return;}
        i = (i + k) % arr.size();
        arr.erase(arr.begin() + i);
        solve(arr, n-1, k, i);
        return;
    }
public:
    int findTheWinner(int n, int k) {
         vector<int> arr;
         for(int i = 0;i<n;i++){
            arr.push_back(i+1);
         }
         solve(arr, n, k-1, 0);
         return arr[0];
    }
};