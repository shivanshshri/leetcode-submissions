class Solution {
public:
    void findSubset(vector<int> &nums, vector<int>ans,vector<vector<int>>&uniqueSubset, int i){
        if(i==nums.size()){
           uniqueSubset.push_back({ans});
           return; 
        }

        ans.push_back(nums[i]);
        findSubset(nums, ans, uniqueSubset, i+1);

        ans.pop_back();

        int idx = i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }

        findSubset(nums, ans, uniqueSubset, idx);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       int i =  0;
       sort(nums.begin(), nums.end());
       vector<vector<int>> uniqueSubset;
       vector<int>ans;
       findSubset(nums, ans, uniqueSubset, i);

       return uniqueSubset;
    }
};