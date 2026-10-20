class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int digitSum = nums[i];
            if(nums[i]>9){
                digitSum = 0;
                while(nums[i]>0){
                    digitSum += (nums[i]%10);
                    nums[i]/=10;
                }
            }
            if(digitSum==i){
                return i;
            }
        }
        return -1;
    }
};