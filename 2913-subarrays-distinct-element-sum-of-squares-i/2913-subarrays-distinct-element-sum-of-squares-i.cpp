class Solution {
public:
    int sumCounts(vector<int>& nums) {
       int squareSum = 0;
       for(int i=0; i<nums.size(); i++){
        for(int j=i; j<nums.size(); j++){
            unordered_set<int>checkNum;
            int unique = 0;
            for(int k=i; k<=j; k++){
                if(checkNum.find(nums[k])==checkNum.end()){
                    checkNum.insert(nums[k]);
                    unique++;
                }
            }
            squareSum += unique*unique;
        }
       } 
       return squareSum;
    }
};