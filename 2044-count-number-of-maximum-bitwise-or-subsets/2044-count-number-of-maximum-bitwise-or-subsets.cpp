class Solution {
public:
    void maximumOR(vector<int>&nums, vector<int>& ans, int i, int &c, int & maxOR){
        if(i==nums.size()){
            if(ans.size()>0){
                int ansOR = 0;
                for(int j=0; j<ans.size(); j++){
                    ansOR |= ans[j];
                }
                if(ansOR>maxOR){
                    maxOR =ansOR;
                    c = 1;
                }
                else if(ansOR==maxOR){
                    c++;
                }
            }
            return;
        }
        ans.push_back(nums[i]);
        maximumOR(nums, ans, i+1, c, maxOR);
        ans.pop_back();
        maximumOR(nums, ans, i+1, c, maxOR);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int>ans;
        int c = 0;
        int maxOR = INT_MIN;
        maximumOR(nums, ans, 0, c, maxOR);

        return c;
    }
};