class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        int u = 0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[u] != nums[i]){
            u++;
            nums[u] = nums[i];
        }
        }
        return u+1;
    }
};