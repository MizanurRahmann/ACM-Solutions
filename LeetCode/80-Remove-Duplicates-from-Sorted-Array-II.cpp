class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=0, repeat=1;
        
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[len] && repeat == 1)
            {
                repeat++;
                len++;
                nums[len] = nums[i];
            }
            if(nums[i] != nums[len]){
                len++;
                repeat = 1;
                nums[len] = nums[i];
            }
        }
        return len+1;
    }
};