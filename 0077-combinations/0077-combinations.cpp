class Solution {
public:
    void getCombination(int n, int k, vector<int>&ans, vector<vector<int>>&combination, int i){
        if(ans.size()==k){
            combination.push_back({ans});
            return;
        }
        if(i>n){
            return;
        }
        
            ans.push_back(i);
            getCombination(n,k,ans,combination, i+1);

            ans.pop_back();
            getCombination(n,k,ans,combination, i+1);
        
    }
    vector<vector<int>> combine(int n, int k) {
        int i = 1;
       vector<int>ans;
       vector<vector<int>> combination;
       getCombination(n, k, ans, combination, i); 

       return combination;
    }
};