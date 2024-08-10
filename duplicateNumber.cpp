class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        while(i != n)
        {
            if(nums[i] == nums[i+1]) break;
            else i++;
        }
        return nums[i];
    }
};