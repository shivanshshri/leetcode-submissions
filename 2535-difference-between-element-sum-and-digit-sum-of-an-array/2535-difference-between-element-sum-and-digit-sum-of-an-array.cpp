class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digitSum = 0;
        int elementSum=0;
        for(int i=0; i<nums.size();i++){
            elementSum+=nums[i];
            if(nums[i]>9){
                int n = nums[i];
                while(n>0){
                    digitSum+=(n%10);
                    n/=10;
                }
            }else{
                digitSum+=nums[i];
            }
        }
        return abs(elementSum-digitSum);
    }
};