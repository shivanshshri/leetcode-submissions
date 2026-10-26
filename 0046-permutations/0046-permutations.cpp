class Solution {
public:
    void getPermute(vector<int>&nums, vector<int>&ans, vector<vector<int>>&allPermutations, vector<bool>&visited){
        if(ans.size()==nums.size()){
            allPermutations.push_back({ans});
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(!visited[i]){
                visited[i] = true;
                ans.push_back(nums[i]);
                getPermute(nums, ans, allPermutations, visited);
                ans.pop_back();
                visited[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<int>ans;
       vector<vector<int>> allPermutations;
       vector<bool>visited(nums.size(), false);

       getPermute(nums, ans, allPermutations, visited); 

       return allPermutations;
    }
};