class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int i, pos;

        for(i=0; i<len; i++)
        {
            pos = i;
            if(nums[i] == target || nums[i] > target)
                break;
        }

        if(pos+1 == i)
            ++pos;

        return pos;
    }
};
