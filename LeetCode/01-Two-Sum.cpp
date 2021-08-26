class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ok = 0, length = nums.size();
        vector<int> ans;
        
        for(int i=0; i<length-1; i++)
        {
            for(int j=i+1; j<length; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    ok = 1;
                    break;
                }
            }
            if(ok == 1)
                break;
        }
        return ans;
    }
};