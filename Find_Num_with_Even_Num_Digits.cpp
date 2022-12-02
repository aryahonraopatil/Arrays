class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int even_num = 0;
        int length = (sizeof(nums)/sizeof(nums[0]));
        for(int i = 0; i<length; i++ )
        {
            while(nums[i]>0)
            {
                nums[i] = nums[i]/10;
                count++;
            }
            if((count % 2)==0)
            {
                even_num++;
            }
            else
                continue;
        }
        return even_num;
    }
    
};
