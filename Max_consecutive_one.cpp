class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int length = (sizeof(nums)/sizeof(nums[0]));
        for(int i=0; i<length;i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(nums[i+1]==0)
                {
                    count = 0;
                    continue;
                }
            }
            
        }
        return count;
        
    }
};
